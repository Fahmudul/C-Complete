#include <iostream>
int main()
{
  // type conversion = conversion of one data type to another
  // type conversion can be implicit or explicit
  int x = 5;
  float y = 2.5;
  int z = x + y;
  // std::cout << z << std::endl;

  double b = (int)3.15; // this line is an explicit type conversion and doing so is called type casting. And this is doing first convert 3.15 to int and then convert it to double
  // std::cout << b;
  int correct = 8;
  int questions = 10;
  double score = correct / questions * 100;
  // std::cout << score << '%';
  long double G = 12.45323423434;
  std::cout << G;

  return 0;
}