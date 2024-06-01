#include <iostream>
#include <ctime>
int main()
{
  // Random event generator

  srand(time(0));
  int randomChoice = rand() % 6 + 1;
  // Switch case

  switch (randomChoice)
  {
  case 1:
    std::cout << "It was a sunny day" << std::endl;
    break;
  case 2:
    std::cout << "It was a cloudy day" << std::endl;
    break;
  case 3:
    std::cout << "It was a rainy day" << std::endl;
    break;
  case 4:
    std::cout << "It was a hot day" << std::endl;
    break;
  case 5:
    std::cout << "It was a snowyy day" << std::endl;
    break;
  case 6:
    std::cout << "It was a stormy day" << std::endl;
    break;
  default:
    std::cout << "Invalid choice" << std::endl;
    break;
  }
  return 0;
}