#include <iostream>
// void sort(int arr[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     for (int j = 0; j < size - i - 1; j++)
//     {
//       if (arr[j] < arr[j + 1])
//       {
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//       }
//     }
//   }
// }

void sortArray(int array[], int size);
int main()
{
  // Sorting in an array using bubble sort
  int arr[10] = {10, 3, 6, 2, 5, 1, 4, 8, 7, 9};
  int size = sizeof(arr) / sizeof(arr[0]);
  sortArray(arr, size);
  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << ",";
  }
  // for (int i = 0; i < size; i++)
  // {
  //   std::cout << arr[i] << ",";
  //   // return 0;
  // }
}

void sortArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}