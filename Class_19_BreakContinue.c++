#include <iostream>
int main()
{
  // Break and continue statement
  for (int i = 0; i < 10; i++)
  {
    if (i == 5)
    {
      break; // here we will break the loop when i = 5
    }
    std::cout << i << std::endl;
  }
  // Example of continue
  for (int i = 0; i < 10; i++)
  {
    if (i == 5)
    {
      continue; // This will skip 5
    }
    std::cout << i << std::endl;
  }
  return 0;
}