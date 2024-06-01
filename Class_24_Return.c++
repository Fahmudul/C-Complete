#include <iostream>
using str = std::string;
str fullName(str firstName, str lastName)
{
  str newName = firstName + " " + lastName;
  return newName;
}
int main()
{
  // The return statement is used to exit a function
  str firstName, lastName;
  std::cout << "Enter first name: " << std::endl;
  std::cin >> firstName;
  std::cout << "Enter last name: " << std::endl;
  std::cin >> lastName;
  str FullName = fullName(firstName, lastName);
  std::cout << "Your full name is: " << FullName << std::endl;
  return 0;
}