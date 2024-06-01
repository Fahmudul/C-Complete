#include <iostream>

/**
 * This is a comment
 * @param i  the current iteration of the loop
 */
int main()
{
  // For loop
  //  for(int i = 0; i < 10; i++){
  //    std::std::cout << "Happy new year " << std::endl;
  //  }

  // For loop
  for (int i = 1; i <= 5; i++)
  {
    std::cout << i << std::endl;
  }
  int i = 1;
  // While loop
  while (i <= 5)
  {
    std::cout << i << std::endl;
    i++;
  }
  int i = 1;
  // Do While loop
  do
  {
    std::cout << i << std::endl;
    i++;
  } while (i <= 5);

  // For loop
  for (int i = 2; i <= 10; i += 2)
  {
    std::cout << i << std::endl;
  }
  int i = 2;
  // While loop
  while (i <= 10)
  {
    std::cout << i << std::endl;
    i += 2;
  }
  int i = 2;
  // Do While loop
  do
  {
    std::cout << i << std::endl;
    i += 2;
  } while (i <= 10);
  // For loop
  std::string str = "Hello, World!";
  for (int i = 0; i < 5; i++)
  {
    std::cout << str[i] << std::endl;
  }
  std::string str = "Hello, World!";
  int i = 0;
  // While loop
  while (i < 5)
  {
    std::cout << str[i] << std::endl;
    i++;
  }
  std::string str = "Hello, World!";
  int i = 0;
  // Do While loop
  do
  {
    std::cout << str[i] << std::endl;
    i++;
  } while (i < 5);
  return 0;
