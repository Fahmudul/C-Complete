#include <iostream>
int main()
{
  // Important string methods
  std::string name;
  std::cout << "Enter your name : " << std::endl;
  std::getline(std::cin, name); // DO NOT USE >> OPERATOR INSIDE std::getline()
  // The std::getline() function reads a whole line of input, including spaces.
  // Using >> operator inside std::getline() will skip leading whitespace characters,
  // including the newline character left behind by the previous input operation.
  // This can cause unexpected behavior and lead to incorrect results.
  // It is recommended to use std::getline() exclusively for reading input lines.
  // std::cout << name.length() << std::endl;
  // std::cout << name.size() << std::endl;
  // if (name.length() > 12) //* name.length() returns the number of characters in the string
  // {
  //   std::cout << "Name is too long";
  // }
  // name.clear(); // Clear the the entire string.

  // if (name.empty())  // Check if string is emptyfah
  // {
  //   std::cout << "Name is empty";
  // }
  // else
  // {
  //   std::cout << "Welcome" << name;
  // }
  return 0;
}