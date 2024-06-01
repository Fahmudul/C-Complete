#include <iostream>
void testFunction(std::string name, double price, char grade, int age);
double totalPrice(double prices[], int size);
int main()
{
  double prices[] = {1.99, 2.99, 3.99, 4.99, 5.99};
  std::string name = "Siam";
  double price = 1.99;
  char grade = 'A';
  int age = 20;
  int size = sizeof(prices) / sizeof(prices[0]);
  // testFunction(name, price, grade, age);
  std::cout << totalPrice(prices, size);
  return 0;
}
void testFunction(std::string name, double price, char grade, int age)
{
  std::cout << name << "," << price << "," << grade << "," << age << std::endl;
}
double totalPrice(double prices[], int size)
{
  double accumulated = 0;
  for (int i = 0; i < size; i++) // In this function we aren't working with an array but with a pointer. And since its a pointer it shows the address of the array. But we don't want the address. So to fix this problem we will let the function knows the size of the array. To do so we can pass the size of the array by passing a second parameter.
  {
    accumulated += prices[i];
  }
  return accumulated;
}
