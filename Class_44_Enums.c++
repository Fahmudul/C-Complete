#include <iostream>
// In C++, an enum (short for enumeration) is a user-defined type that consists of a set of named integral constants, representing different possible values for a variable. Enumerations are used to assign names to integral values, making the code more readable and manageable.
enum Day
{
  sunday,
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday
};
int main()
{
  Day today = friday;
  switch (today)
  {
  case sunday:
    std::cout << "It is sunday \n";
    /* code */
    break;
  case monday:
    std::cout << "It is sunday \n";
    break;
  case tuesday:
    std::cout << "It is tuesday \n";
    break;
  case wednesday:
    std::cout << "It is wednesday \n";
    break;
  case thursday:
    std::cout << "It is thursday \n";
    break;
  case friday:
    std::cout << "It is friday \n";
    break;
  case saturday:
    std::cout << "It is saturday \n";
    break;
  default:
    break;
  }
  return 0;
}