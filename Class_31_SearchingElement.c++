#include <iostream>
int searchingElement(int arr[], int size, int search);
int main()
{
  // Searching an element through an array
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int search;
  std::cout << "Enter the element you want to search: ";
  std::cin >> search;
  int size = sizeof(arr) / sizeof(arr[0]);
  std::cout << searchingElement(arr, size, search);
  return 0;
}

int searchingElement(int arr[], int size, int search)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == search)
    {
      return i;
    }
  }
  return -1;
}