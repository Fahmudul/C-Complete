#include <iostream>
namespace myAge
{
  int x = 9;
}
namespace yourAge
{
  int x = 4;
}

namespace libraryA
{
  std::string name;
}
int main()
{

  // :: scope resolution operator
  /*
  In programming, a namespace is a container that holds a set of related identifiers such as classes, functions, variables, and constants. It helps to organize and differentiate between identifiers from different sources or libraries.

  Namespaces are like directories or folders that separate code into different sections. They provide a way to avoid naming conflicts between identifiers from different sources.

  For example, let's say you have two libraries, Library A and Library B, both of which have a function called calculateSum(). Without    namespaces, if you try to use both functions in the same program, there would be a naming conflict because both functions have the same name.

  Namespaces solve this problem by allowing each library to define its own namespace and place its functions, classes, and variables within that  namespace. So, in this case, Library A can have its functions and variables in the LibraryA namespace, and Library B can have its functions and  variables in the LibraryB namespace.
  */
  int x = 2;
  // std::cout << myAge::x << std::endl;
  // std::cout << yourAge::x << std::endl;
  // std::cout << x << std::endl;
  std::cout << "Enter libraryA x: " << std::endl;
  std::cin >> libraryA::name;

  std::cout << "Your name is: " << libraryA::name << "\n";
  return 0;
}