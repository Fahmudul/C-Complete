#include <iostream>
int main()
{
  // Way 1 (Using dynamic memory alloaction)
  char *pGrades = NULL;
  int size;
  std::cout << "How many grades to enter in: ";
  std::cin >> size;
  pGrades = new char[size];
  for (int i = 0; i < size; i++)
  {
    std::cout << "Enter grade #" << i + 1 << ": ";
    std::cin >> pGrades[i];
  }
  for (int i = 0; i < size; i++)
  {
    std::cout << pGrades[i] << ", ";
  }
  // deallocation of pGrades;
  delete[] pGrades;
  
  // Way 2

  int size_2;
  std::cout << "Enter the size of the array: ";
  std::cin >> size_2;
  char grades[size] = {};
  for (int i = 0; i < size; i++)
  {
    std::cout << "Enter grade #" << i + 1 << ": ";
    std::cin >> grades[i];
  }
  for (int i = 0; i < size; i++)
  {
    std::cout << grades[i] << ", ";
  }
  return 0;
}