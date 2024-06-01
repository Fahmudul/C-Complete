#include <iostream>

int main()
{
  // double temperature;
  // char unit;

  // std::cout << "Enter the temperature: ";
  // std::cin >> temperature;

  // std::cout << "Enter the unit (C for Celsius, F for Fahrenheit): ";
  // std::cin >> unit;

  // double convertedTemperature;

  // if (unit == 'C')
  // {
  //   convertedTemperature = (temperature * 9 / 5) + 32;
  //   std::cout << temperature << " Celsius is equal to " << convertedTemperature << " Fahrenheit.";
  // }
  // else if (unit == 'F')
  // {
  //   convertedTemperature = (temperature - 32) * 5 / 9;
  //   std::cout << temperature << " Fahrenheit is equal to " << convertedTemperature << " Celsius.";
  // }
  // else
  // {
  //   std::cout << "Invalid unit.";
  // }

  // celsius to fahrenheit
  double temperature;
  char unit;
  std::cout << "Enter unit (C for Celsius, F for Fahrenheit): ";
  std::cin >> unit;
  // std::cout << (temperature == 'C' || temperature == 'c' ? std::cout<<(5*(temperature-32))/9: std::cout<<(((9*temperature)/5)+32));
  std::cout << "Enter temperature: ";
  std::cin >> temperature;
  std::cout << (unit == 'C' || unit == 'c' ? ((9 * temperature) / 5) + 32 : (5 * (temperature - 32)) / 9);

  // std::cin >> temperature;
  // std::cout << (unit == 'C' || unit == 'c' ? (temperature * 9 / 5) + 32 : (temperature - 32) * 5 / 9);
  return 0;
}