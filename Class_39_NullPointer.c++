#include<iostream>
int main(){
  // What is a null pointer in C++?
  // A null pointer is a special type of pointer in C++ that has no associated memory address.
  // It is used to indicate that a pointer does not point to a valid object.
  // A null pointer is commonly used to terminate a loop or to check if a pointer has been assigned a valid memory address.
  // A null pointer is also used to indicate that a pointer is not pointing to a valid object.

  // Example 1: Initializing a null pointer
  int* nullPtr1 = nullptr; // this is the standard way to initialize a null pointer in C++
  int* nullPtr2 = 0; // this is also a valid way to initialize a null pointer in C++
  int* nullPtr3 = NULL; // this is also a valid way to initialize a null pointer in C++

  // Example 2: Check if a pointer is a null pointer
  int* ptr = nullptr;
  if (ptr == nullptr) {
    std::cout << "ptr is a null pointer" << std::endl;
  } else {
    std::cout << "ptr is not a null pointer" << std::endl;
  }

  // Example 3: Using a null pointer to terminate a loop
  int numbers[] = {1, 2, 3, 4, 5};
  int* ptr2 = numbers;
  while (ptr2 != nullptr) {
    std::cout << *ptr2 << std::endl;
    ptr2++;
  }
  return 0;
}