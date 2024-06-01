#include <iostream>
int main()
{
  // Array in c++ are static. By mean you can't change the size of an array once its declared.
  // Basic syntax to declare an array is
  // datatype arrayname[size]; = starts with "{" and ends with "}" in between these two curly braces arrays elements are separated by ","
  using str = std::string;
  int marks[5] = {98, 89, 90, 97, 87};
  // std::cout << marks; // This will gives you the memory address of the array
  str playerName[5];
  playerName[0] = "John";
  playerName[1] = "Sam";
  playerName[2] = "Adam";
  playerName[3] = "Sam";
  playerName[4] = "Adam";
  std::cout << playerName[0] << ',' << playerName[1] << std::endl;
  return 0;
}