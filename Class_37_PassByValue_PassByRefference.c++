#include <iostream>
void printname(std::string &name);
int main()
{
  std::string name = "Siam";
  std::cout << &name << "\n";
  printname(name);
  return 0;
}

void printname(std::string &name)
{
  std::cout << &name;
}