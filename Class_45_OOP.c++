#include <iostream>
class Car
{
  // Pubilc access modifier. These will be use outside of the function
public:
  std::string name;
  std::string model;
  std::string make;
  int year;
  std::string color;
  void accelerate()
  {
    std::cout << "Pip pip";
  }
  void brake()
  {
    std::cout << "Stopped";
  }
};
int main()
{
  Car car1;
  car1.make = "Ford";
  car1.model = "Mustang";
  car1.year = 2023;
  car1.color = "Silver";
  std::cout << car1.make << '\n';
  std::cout << car1.model << '\n';
  std::cout << car1.year << '\n';
  std::cout << car1.color << '\n';

  car1.accelerate();
  car1.brake();
  return 0;
}