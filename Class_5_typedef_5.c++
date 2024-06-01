#include <iostream>
// typedef keyword
// typedef std::string str;
typedef int num;
typedef float doshomik;
// using keyword
using str = std::string;
// using num = int;
int main()
{
  str name = "hello";
  num age = 12;
  doshomik x;
  // x = 12.33;
  std::cout << "Enter value of doshomik: " << std::endl;
  std::cin >> x;
  std::cout << "The value of x :  " << x;

  // std::cout << age << std::endl;
  // std::cout << name << std::endl;
  return 0;
}