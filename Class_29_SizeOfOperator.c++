#include <iostream>
#include <iterator>
int main()
{
  // SizeOf operator
  // SizeOf operator is used to find the size of the data type including variable, class, objects and it actually give the size in bytes
  double gpa = 423423423.34444;

  std::cout << sizeof(gpa) << " bytes" << "\n"; // Output willl be in bytes
  std::string students[] = {"John", "Jane", "Jim", "Jill"};
  // std::cout << sizeof(students) << " bytes" << "\n";
  // This will give the size of the array in bytes
  // If we want the exact length of the array
  // std::cout << sizeof(students) / sizeof(students[0]) << " students" << "\n"; // Here we will get the length of the array. And this is working by dividing the size of the array by the size of the array (one)element
  // Iterate through an array
  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
  {
    std::cout << students[i] << ", ";
  }
  return 0;
}