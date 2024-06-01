#include <iostream>
int main()
{
  // Ternary operator
  // Structure and syntax is same as if else
  // condition ? expression1(true) : expression2(false);

  // int a = 10;
  // int b = 20;
  // int c = (a > b) ? a : b;

  // std::cout << c;

  // Calculator program using ternary operator
  std::string sign;
  double num1, num2, result;
  std::cout << "************* CALCULATOR *************" << std::endl;
  std::cout << "Enter sign: ";
  std::cin >> sign;
  std::cout << "Enter num1: ";
  std::cin >> num1;
  std::cout << "Enter num2: ";
  std::cin >> num2;
  result = sign == "+" ? num1 + num2 : sign == "-" ? num1 - num2
                                   : sign == "*"   ? num1 * num2
                                   : sign == "/"   ? num1 / num2
                                                   : 'Enter_a_valid_sign';
  std::cout << "Result: " << result;
  return 0;
}