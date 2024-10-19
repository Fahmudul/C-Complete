#include <iostream>
int main()
{
  std::string cars[][4] = {{"car1", "car2", "car3", "car4"},
                           {"car5", "car6", "car7", "car8"},
                           {"car9", "car10", "car11", "car12"}};
  // Iterate through 2D array
  int row = sizeof(cars) / sizeof(cars[0]);
  int col = sizeof(cars[0]) / sizeof(cars[0][0]);
  for (int i = 0; i < row; i++)
  {
    // std::cout << "row: " << i << "\n";
    for (int j = 0; j < col; j++)
    {
      // std::cout << "col: " << j << "\n";

      if (i == row - 1 && j == col - 1)
      {
        std::cout << cars[i][j];
        break;
      }
      else
      {
        std::cout << cars[i][j] << ",";
      }
    }
  }
  return 0;
}