#include <iostream>
int main()
{
  // A pointer in C++ is a variable that stores the memory address of another variable. It's a indirect way of accessing a variable.
  //  & address-of operator
  // * dereference operator

  std::string name = "Fahmudul";
  // Creating pointer for variable name. here *p * is the pointer small p is for naming convention that p before Name is a pointer variable. p is not necessary for naming convention only
  std::string *pName = &name;
  // Printing the memory address of name variable using *pName pointer variable
  std::cout << *pName;
  return 0;
}