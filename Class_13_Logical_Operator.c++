#include <iostream>
int main()
{
  // Logical Operator This will only execute when one of the condition is true
  // && AND This will only execute when both the conditions are true
  // || OR
  // ! NOT This will be used to reverse the value for example if the value is true it will be false and if the value is false it will be true
  bool digit = true;
  std::cout << (!digit ? 1 : 0);


  //   std::cin >> temperature;
  // std::cout << (unit == 'C' ? (temperature * 9 / 5) + 32 : (temperature - 32) * 5 / 9);
  return 0;
}