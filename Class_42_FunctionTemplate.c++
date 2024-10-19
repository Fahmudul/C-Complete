#include <iostream>

template <typename T> // template <typename T>: This declares a template with a placeholder type T. The T can be any name, but it’s common to use T to represent a type.
T maxx(T x, T y)      // T functionName(T parameter1, T parameter2)
{
  return (x > y) ? x : y;
}

// how to handle multiple data types using function template
template <typename N, typename I>
// Here, auto is used to declare the return type of the min function template. This means that the return type of the function will be automatically deduced by the compiler based on the types of the variables x and y.
auto min(N x, I y)
{
  return (x < y) ? x : y;
}
int main()
{
  std::cout << maxx(1, 12) << '\n';
  std::cout << min(12.3, 13) << '\n';
  return 0;
}