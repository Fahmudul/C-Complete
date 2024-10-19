#include <iostream>
/**
 * The main function demonstrating dynamic memory allocation and deallocation.
 *
 * Allocates memory for an integer, assigns it a value, and prints the 
 * memory address and value. Finally, deallocates the memory to prevent
 * memory leaks.
 *
 * @return 0 indicating successful execution of the program.
 */
int main()
{
  int *pNum = NULL;
  pNum = new int;
  *pNum = 21;
  std::cout << "Adress: " << pNum << '\n';
  std::cout << "Value: " << pNum << '\n';
  delete pNum;
  
  return 0;
}