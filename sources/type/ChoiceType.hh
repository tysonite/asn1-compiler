#ifndef __CHOICE_TYPE_HH
#define __CHOICE_TYPE_HH

#include <vector>

#include <type/Type.hh>

namespace asn1
{

class ChoiceType : public Type
{
public:

   typedef std::vector<Type*> ChoicesType;

   // Constructor
   explicit ChoiceType() {}

   // Returns type identifier
   TypeID typeID() const { return CHOICE_TYPE; }

   // Returns possible choices
   const ChoicesType& getChoices() const { return _choices; }

protected:

   // Adds type to the list
   void addChoice(Type* type) { _choices.push_back(type); }

private:

   // possible choices
   ChoicesType _choices;
};

}

#endif // __CHOICE_TYPE_HH
