#include <iostream>
int main()
{
  // memory address  = a location in memory where data is stored
  // a memory address can accessed with & (address-of operator)
  std::string name = "Bro";
  int age = 21;
  bool student = true;
  // 0x40431ff910
  std::cout << &name << "\n";
  return 0;
}