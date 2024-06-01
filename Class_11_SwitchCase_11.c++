#include <iostream>
int main()
{
  int day;
  std::cout << "Enter day" << std::endl;
  std::cin >> day;
  switch (day)
  {
  case /* constant-expression */ 1:
    std::cout << "Monday" << std::endl;
    break;
    /* code */
  case 2:
    std::cout << "Tuesday" << std::endl;
    break;

  default:
    std::cout << "Please enter a valid day" << std::endl;
    break;
  }
  // switch (day)
  // {
  // case 1:
  //   std::cout << "Monday" << std::endl;
  //   break;
  // case 2:
  //   std::cout << "Tuesday" << std::endl;
  //   break;
  // case 3:
  //   std::cout << "Wednesday" << std::endl;
  //   break;
  // default:
  //   std::cout << "Invalid day" << std::endl;
  //   break;
  // }

  // // Example 2
  // int grade = 85;

  // switch (grade / 10)
  // {
  // case 10:
  // case 9:
  //   std::cout << "A" << std::endl;
  //   break;
  // case 8:
  //   std::cout << "B" << std::endl;
  //   break;
  // case 7:
  //   std::cout << "C" << std::endl;
  //   break;
  // default:
  //   std::cout << "D" << std::endl;
  //   break;
  // }

  // // Example 3
  // char grade = 'B';

  // switch (grade)
  // {
  // case 'A':
  //   std::cout << "Excellent" << std::endl;
  //   break;
  // case 'B':
  //   std::cout << "Good" << std::endl;
  //   break;
  // case 'C':
  //   std::cout << "Fair" << std::endl;
  //   break;
  // default:
  //   std::cout << "Pass" << std::endl;
  //   break;
  // }

  /*
  Explanation: In this example, the switch statement checks the value of the grade variable, which is a character. Since grade is equal to 'B', it matches the second case statement and prints "Good". The break statement ensures that the program exits the switch statement after executing the corresponding code.

These are just a few examples to demonstrate the usage of the switch statement in different scenarios. The switch statement is a powerful tool for handling multiple conditions in a concise and readable manner.
  */
  return 0;
}
