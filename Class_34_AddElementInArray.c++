#include <iostream>
int main()
{
  // Add element to an array Method 1
  int value;
  std::string array[6];
  int size = sizeof(array) / sizeof(array[0]);
  // std::cout << "Enter the size of array" << std::endl;

  // std::cin >> size;
  for (int i = 0; i < size; i++)
  {
    std::cout << "Enter value" << std::endl;
    std::cin >> value;
    if (array[i] == 'q')
    {
      break;
    }
    array[i] = value;
  }

  for (int i = 0; array[i].empty; i++)
  {
  }
  // for (int item : array)
  // {
  //   if (item == size)
  //   {
  //     std::cout << item << std::endl;
  //   }
  //   else
  //   {
  //     std::cout << item << ",";
  //   }
  // }
  return 0;
}