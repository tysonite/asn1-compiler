#include <string>

#include <type/ChoiceType.hh>

namespace asn1
{

// Returns string representation of type
std::string ChoiceType::toString() const
{
   std::string s = Type::toString();
   if (!_choices.empty())
   {
      s += " { ";

      bool isFirst = true;
      for (ChoicesType::const_iterator p = _choices.begin(); p != _choices.end(); ++p)
      {
         if (isFirst)
            isFirst = false;
         else
            s += " | ";

         s += (*p)->toString();
      }

      s += " }";
   }
   return s;
}

}
