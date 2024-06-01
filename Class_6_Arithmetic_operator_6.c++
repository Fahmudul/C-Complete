#include <iostream>
/**
 * Main entry point of the C++ program.
 *
 * This program demonstrates the use of several arithmetic operators.
 *
 * @return 0 indicating successful execution of the program.
 */

namespace additions
{
  int result;
}
namespace subtractions
{
  int result;
}
namespace multiplications
{
  int result;
}
namespace divisions
{
  int result;
}
namespace modulus // modulus operator
{
  int result;
}

namespace increment //++
{
  int x;
}
namespace decrement //--
{
  int x;
}
namespace increment_ //+=
{
  int x;
}
namespace decrement_ //-=
{
  int x;
}

int main()
{
  additions::result = 5 + 3;
  // std::cout << result << std::endl; // Output: 8

  subtractions::result = 10 - 2;
  std::cout << subtractions::result << std::endl; // Output: 8

  multiplications::result = 4 * 6;
  // std::cout << result << std::endl; // Output: 24

  divisions::result = 15 / 3;
  // std::cout << result << std::endl; // Output: 5 (integer division)

  modulus::result = 13 % 4;
  // std::cout << result << std::endl; // Output: 1

  increment::x = 5;
  increment::x++;
  // std::cout << x << std::endl; // Output: 6

  decrement::x = 5;
  decrement::x--;
  // std::cout << x << std::endl; // Output: 4

  increment_::x = 5;
  increment_::x += 3;
  // std::cout << x << std::endl; // Output: 8

  decrement_::x = 5;
  decrement_::x -= 2;
  // std::cout << x << std::endl; // Output: 3

  int student = 6 - 5 + 4 * 3 / 2;
  // std::cout << student << std::endl;

  return 0;
}
