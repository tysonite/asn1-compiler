#ifndef __CHOICE_TYPE_HH
#define __CHOICE_TYPE_HH

#include <vector>

#include "Type.hh"

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

   // Returns string representation of type
   std::string toString() const;

   void setTagging(TaggingType tagging)
   {
      assert(tagging != IMPLICIT_TAGGING); // do not allow IMPLICT tag for CHOICE type
      Type::setTagging(tagging);
   }

   // Returns possible choices
   const ChoicesType& getChoices() const { return _choices; }

protected:

   // Adds type to the list
   void _addChoice(Type* type) { _choices.push_back(type); }

private:

   // possible choices
   ChoicesType _choices;
};

}

#endif // __CHOICE_TYPE_HH
