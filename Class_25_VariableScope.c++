#include <iostream>
int x = 130; // This is an example of global scope this variable x is accessible everywhere in the program
// ** If we want to use global variable even we decalred a same name local variable we need to use the scope resolution operator ( :: ) **
int main()
{
  // Variable scope
  //  There are 3 types of variable scope in C++:
  //  1. Local scope
  //  2. Global scope
  //  3. Static scope

  int x = 10;
  {
    int x = 20;
    std::cout << "Local scope inside a block " << x << std::endl;
  }
  std::cout << "Local scope inside main function " << x << std::endl;
  // e.g : here we will use global variable x
  std::cout << "Global scope " << ::x << std::endl;

  // Local scope are defined within a function or a block of code.
  // Global scope are defined outside a function or a block of code.
  // Static scope are defined within a function or a block of code.
  // The differences between local and static scope are that local scope is limited to a function and static scope is limited to a block of code.
  // Example of local scope

  // example of static scope
  // static int x = 10;
  // {
  //   static int x = 20;
  //   std::cout << x << std::endl;
  // }
  // std::cout << x << std::endl;

  // explanation of the above code :
  // x is initialized with 10 in the global scope and it is then assigned a value of 20 in the local scope.
  // x is initialized with 10 in the global scope and it is then assigned a value of 20 in the static scope.

  // Global scope are defined outside a function or a block of code.

  return 0;
}