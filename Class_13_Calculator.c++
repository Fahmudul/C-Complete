#include <iostream>
int main()
{
  char sign;
  double num1, num2, result;
  std::cout << "************* CALCULATOR *************" << std::endl;
  std::cout << "Enter sign: ";
  std::cin >> sign;
  std::cout << "Enter num1: ";
  std::cin >> num1;
  std::cout << "Enter num2: ";
  std::cin >> num2;
  // result = sign == '+' ? num1 + num2 : sign == '-' ? num1 - num2 : sign == '*' ? num1 * num2 : sign == '/' ? num1 / num2 : 0;
  switch (sign)
  {
  case '+':
    result = num1 + num2;
    std::cout << "Result: " << result << std::endl;

    break;
  case '-':
    result = num1 - num2;
    std::cout << "Result: " << result << std::endl;
    break;
  case '*':
    result = num1 * num2;
    std::cout << "Result: " << result << std::endl;

    break;
  case '/':
    result = num1 / num2;
    std::cout << "Result: " << result << std::endl;

    break;
  default:
    std::cout << "Enter a valid sign including +,-,*,/" << std::endl;
  }
  std::cout << "***************************************";
  return 0;
}