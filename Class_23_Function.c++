#include <iostream>

// Function
void calculator(char sign, int num1, int num2)
{
  int result;
  result = sign == '+' ? num1 + num2 : sign == '-' ? num1 - num2
                                   : sign == '*'   ? num1 * num2
                                   : sign == '/'   ? num1 / num2
                                                   : 0;
  std::cout << "Result: " << result << std::endl;
}
int main()
{
  // Function
  // Function is a block of code which only runs when it is called
  // Function is used to store code for re-use

  //** Function return type --> void, int, double, char, etc. **//
  //When to use void function is when we don't want to return any value
  //When to use int function is when we want to return an integer value
  //When to use double function is when we want to return a double value
  //When to use char function is when we want to return a character value
  
  int number1, number2;
  char operation;
  std::cout << "Enter operation (+, -, *, /): ";
  std::cin >> operation;
  std::cout << "Enter number 1: ";
  std::cin >> number1;
  std::cout << "Enter number 2: ";
  std::cin >> number2;
  calculator(operation, number1, number2);
  return 0;
}