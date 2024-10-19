#include <iostream>
class Stove
{
  // We use private (private: ) access modifier when we don't want to change/access a user an attribute outside of a class
private:
  int temperature = 0;

  // We use public (public: ) access modifier when we need to access/change the attribute outside of a class
public:
  // getter and setter inside constructor
  Stove(int temperature)
  {
    setTemperature(temperature);
  }

  // initializing getter(read-only). to read an attribute that is private we need to use getter. which is a method
  int getTemperature()
  {
    return temperature;
  }
  // initializing setter(writeable). To change an atrribute that is private we need to use setter. which is a method.
  void setTemperature(int temperature)
  {
    if (temperature < 0)
    {
      this->temperature = 0;
    }
    else if (temperature >= 10)
    {
      this->temperature = 10;
    }
    else
    {
      this->temperature = temperature;
    }
  }
};
int main()
{
  // Abstraction = hiding unnecessary data from outside a class
  // getter  = function that makes a private attribute READABLE
  // setter = funciton that makes a private attribute writeable
  Stove stove(8);
  // stove.temperature = 10000000;
  // Getting private attribute using getter method.
  std::cout << "The temperature setting is " << stove.getTemperature() << '\n';
  // std::cout << "Temperature before changing using setter " << stove.getTemperature() << '\n';
  // setting private attribute using setter method
  stove.setTemperature(5);
  std::cout << "Temperature after changing using setter " << stove.getTemperature();

  return 0;
}