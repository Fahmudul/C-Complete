#include <iostream>
int main()
{
  // const double pi = 3.114159;
  // double radius = 10;
  // double circumference = 2 * pi * radius;
  // std::cout << circumference << " cm";

  // const float area=12;
  // const float base=23;
  // const float height=34;
  int area, base, height;
  std::cout << "Enter Base: " << std::endl;
  std::cin >> base;
  std::cout << "Enter height: ";
  std::cin >> height;
  area = base * height;
  std::cout << "Area of given input is " << area << " square meter." << "\n";

  return 0;
}