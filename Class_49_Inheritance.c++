#include <iostream>
// inheritance  = A class can recieve attributes and methods from another class children classes inherit from a parent class. Helps to reuse similar code found within multiple classes
class Animal
{
public:
  bool alive = true;
  void eat()
  {
    std::cout << "This animal is eating \n";
  }
};

// initializing Dog class. Which inheritted from Animal class
class Dog : public Animal
{
  // Now dog has every attribute and methods that animal class have. We can add new attribute and method in Dog class as well.
public:
  void bark()
  {
    std::cout << "The dog goes vau vau";
  }
};
int main()
{
  Dog dog;
  std::cout << dog.alive << '\n';
  dog.eat();
  dog.bark();
  return 0;
}