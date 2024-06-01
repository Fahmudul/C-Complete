#include <iostream>
int main()
{
  // For each loop
  // For each loop is used to iterate over the elements of a container
  //*Traditional for loop example to iterate through an array
  int arr[5] = {1, 2, 3, 4, 5}; // This syntax has more flexibility
  for (int i = 0; i < 5; i++)
  {
    std::cout << arr[i] << std::endl;
  }

  //*For each loop example
  std::string students[5] = {"Raj", "Rahul", "Raman", "Ramesh", "Ram"};
  // Syntax and structure of for each loop --> for(datatype variable : container(iterable e.g array)){ you code inside}
  for (std::string student : students)
  {
    std::cout << student << ",";
  }
  return 0;
}