#include <iostream>
int main()
{
  // Do while loop is same as while loop but it executes atleast once
  // It basically runs the loop atleast once before checking the condition/ starting the loop body
  // int number;
  // do
  // {
  //   std::cout << "Enter a number: ";
  //   std::cin >> number;

  // } while (number < 0);
  // std::cout << "Entered number is: " << number << std::endl;
  // Another example
  int i = 0;
  std::string your_name;
  std::cin >> your_name;
  do
  {
    std::cout << i + 1 << your_name[i] << std::endl;
    // std::cout << i << std::endl;
    i++;
  } while (i < your_name.length());
  return 0;
}