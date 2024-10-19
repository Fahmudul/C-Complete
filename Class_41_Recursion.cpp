#include <iostream>
int factorial(int number);

int main()
{
  // Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem. In recursion, the function keeps calling itself with a smaller instance of the problem until a base case is reached, which stops the recursive calls.

  // Example of recursion: Factorial calculation using recursion

  // Analogy: Recursion is like a set of Russian dolls, where each doll contains a smaller doll inside it. The smallest doll is the base case that stops the recursion, and each larger doll calls the smaller doll until the base case is reached.
  int number;
  std::cout << "Enter the number you want to get factorial: ";
  std::cin >> number;
  std::cout << "Factorial of " << number << "is: \n"
            << factorial(number);
  return 0;
}

// Recursive approach to get factorial of n number
int factorial(int number)
{
  // Base case
  if (number > 1)
  {
    return number * factorial(number - 1);
  }
  else
  {
    return 1;
  }
}