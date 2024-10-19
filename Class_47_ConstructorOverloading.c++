#include <iostream>
class Pizza
{
public:
  std::string topping1;
  std::string topping2;

  // Constructor Overloading in C++
  //* Constructor overloading is a feature in C++ that allows multiple constructors with the same name to be defined for a class, as long as they have different parameter lists.

  // Constructor Overloadin 1 with no parameter
  Pizza()
  {
  }
  // Constructor Overloadin 2 with 1 parameter
  Pizza(std::string topping1)
  {
    this->topping1 = topping1;
  }
  // Constructor Overloadin 3 with 2 parameter

  Pizza(std::string topping1, std::string topping2)
  {
    this->topping1 = topping1;
    this->topping2 = topping2;
  }
};
int main()
{
  Pizza pizza1("peperoni");
  Pizza pizza2("peperon3", "peperoni2");
  Pizza pizza3; // Constructor that doesn't have any paramter dont need to call. Meaning we dont need to use bracket like pizza3(). we will simply write pizza3
  std::cout << pizza1.topping1 << '\n';
  std::cout << pizza2.topping2;
  return 0;
}