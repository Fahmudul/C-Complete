// #include <iostream>
// int main()
// {
//   const int SIZE = 99;
//   std::string foods[SIZE] = {};
//   // int SIZE = SIZEof(foods) / SIZEof(foods[0]);
//   fill(foods, foods + (SIZE / 3), "banana");
//   fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "pineapple");
//   fill(foods + (SIZE / 3) * 2, foods + SIZE, "apple");
//   // Fill function takes 3 arguments. First argument is the starting pointer. Second argument is the ending pointer. Third argument is the value you want to fill.
//   for (int i = 1; i < SIZE + 1; i++)
//   {
//     std::cout << i << ":" << foods[i] << std::endl;
//   }

//   return 0;
// }
// C++ code to demonstrate working of
// size() and max_size()
#include <iostream>
#include <array> // for size() and max_size()
using namespace std;
int main()
{
  // Initializing the array elements
  array<int, 6> ar = {1, 2, 3, 4, 5, 6};

  // Printing number of array elements
  cout << "The number of array elements is : ";
  cout << ar.size() << endl;

  // Printing maximum elements array can hold
  cout << "Maximum elements array can hold is : ";
  cout << ar.max_size() << endl;

  return 0;
}
