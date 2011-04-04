#ifndef __UTILS_HH
#define __UTILS_HH

#include <vector>
#include <string>
#include <cstring>

namespace utils
{

// The COMPILE_ASSERT macro can be used to verify that a compile time
// expression is true. For example, you could use it to verify the
// size of a static array:
//
//   COMPILE_ASSERT(ARRAYSIZE_UNSAFE(content_type_names) == CONTENT_NUM_TYPES,
//                  content_type_names_incorrect_size);
//
// or to make sure a struct is smaller than a certain size:
//
//   COMPILE_ASSERT(sizeof(foo) < 128, foo_too_large);
//
// The second argument to the macro is the name of the variable. If
// the expression is false, most compilers will issue a warning/error
// containing the name of the variable.

template <bool>
struct CompileAssert {};

#undef COMPILE_ASSERT
#define COMPILE_ASSERT(expr, msg) \
   typedef CompileAssert<(bool(expr))> msg[bool(expr) ? 1 : -1]

// Implementation details of COMPILE_ASSERT:
//
// - COMPILE_ASSERT works by defining an array type that has -1
//   elements (and thus is invalid) when the expression is false.
//
// - The simpler definition
//
//     #define COMPILE_ASSERT(expr, msg) typedef char msg[(expr) ? 1 : -1]
//
//   does not work, as gcc supports variable-length arrays whose sizes
//   are determined at run-time (this is gcc's extension and not part
//   of the C++ standard).  As a result, gcc fails to reject the
//   following code with the simple definition:
//
//     int foo;
//     COMPILE_ASSERT(foo, msg); // not supposed to compile as foo is
//                               // not a compile-time constant.
//
// - By using the type CompileAssert<(bool(expr))>, we ensures that
//   expr is a compile-time constant.  (Template arguments must be
//   determined at compile-time.)
//
// - The outter parentheses in CompileAssert<(bool(expr))> are necessary
//   to work around a bug in gcc 3.4.4 and 4.0.1.  If we had written
//
//     CompileAssert<bool(expr)>
//
//   instead, these compilers will refuse to compile
//
//     COMPILE_ASSERT(5 > 0, some_message);
//
//   (They seem to think the ">" in "5 > 0" marks the end of the
//   template argument list.)
//
// - The array size is (bool(expr) ? 1 : -1), instead of simply
//
//     ((expr) ? 1 : -1).
//
//   This is to avoid running into a bug in MS VC 7.1, which
//   causes ((0.0) ? 1 : -1) to incorrectly evaluate to 1.

// A macro to disallow the copy constructor and operator= functions
// This should be used in the private: declarations for a class
#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
   TypeName(const TypeName&);               \
   void operator=(const TypeName&)

// A macro to disallow all the implicit constructors, namely the
// default constructor, copy constructor and operator= functions.
//
// This should be used in the private: declarations for a class
// that wants to prevent anyone from instantiating it. This is
// especially useful for classes containing only static methods.
#define DISALLOW_IMPLICIT_CONSTRUCTORS(TypeName) \
   TypeName();                                   \
   DISALLOW_COPY_AND_ASSIGN(TypeName)

// The arraysize(arr) macro returns the # of elements in an array arr.
// The expression is a compile-time constant, and therefore can be
// used in defining new arrays, for example.  If you use arraysize on
// a pointer by mistake, you will get a compile-time error.
//
// One caveat is that arraysize() doesn't accept any array of an
// anonymous type or a type defined inside a function.  In these rare
// cases, you have to use the unsafe ARRAYSIZE_UNSAFE() macro below.  This is
// due to a limitation in C++'s template system.  The limitation might
// eventually be removed, but it hasn't happened yet.

// This template function declaration is used in defining arraysize.
// Note that the function doesn't need an implementation, as we only
// use its type.
template <typename T, size_t N>
char (&ArraySizeHelper(T (&array)[N]))[N];

// That gcc wants both of these prototypes seems mysterious. VC, for
// its part, can't decide which to use (another mystery). Matching of
// template overloads: the final frontier.
#ifndef _MSC_VER
template <typename T, size_t N>
char (&ArraySizeHelper(const T (&array)[N]))[N];
#endif

#define arraysize(array) (sizeof(utils::ArraySizeHelper(array)))

namespace
{
   static const char* mask = "0123456789ABCDEF";
}

// Converts the given number with any base into the string
template <typename T>
inline std::string ntos(T n, unsigned char b = 10)
{
   std::string s;

   b = (b > 1 && b <= 16) ? b : 10;
   return (s += n < b ? "" : ntos(n / b, b)) + mask[n % b];
}

// Converts the given string into the integer with any base
template <typename T>
inline T ston(const std::string& s, unsigned char b = 10)
{
   T no = 0;
   const char* pos(NULL);

   b = (b > 1 && b <= 16) ? b : 10;
   for (std::size_t i = 0; i < s.length(); ++i)
      no = (pos = ::strchr(mask, s[i])) != 0 ? static_cast<T>(b) * no + static_cast<T>(pos - mask) : no;
   return no;
}

// Splits the given string by delimiter
inline void split(const std::string& str, std::vector<std::string>& tokens, const std::string& delimiters = " ")
{
   // Skip delimiters at beginning.
   std::string::size_type lastPos = str.find_first_not_of(delimiters, 0);
   // Find first "non-delimiter".
   std::string::size_type pos = str.find_first_of(delimiters, lastPos);

   while (std::string::npos != pos || std::string::npos != lastPos)
   {
      // Found a token, add it to the vector.
      tokens.push_back(str.substr(lastPos, pos - lastPos));
      // Skip delimiters.  Note the "not_of"
      lastPos = str.find_first_not_of(delimiters, pos);
      // Find next "non-delimiter"
      pos = str.find_first_of(delimiters, lastPos);
   }
}


}

#endif // __UTILS_HH
