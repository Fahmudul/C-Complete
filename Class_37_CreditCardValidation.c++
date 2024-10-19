#include <iostream>
#include <string>
#include <typeinfo>
int main()
{
  // Luhn Algorithm
  // --------------
  // Double every second digit from right to left
  // If doubled number is 2 digits, split them
  // Add all single digits from step 1
  // Add all odd numbered digits from right to left
  // Sum results from steps 2 & 3
  // If step 4 is divisble by 10, # is valid
  //
  long long int cardNumber = 4916603235687463;
  std::string stringCard = std::to_string(cardNumber);
  int size = stringCard.length();
  std::cout << stringCard << "\n";
  //  6 1  0 0  9 1  9 2
  //
  int sum_1 = 0;
  int sum_2 = 0;
  for (int i = size - 2; i >= 0; i -= 2)
  {
    int number = (stringCard[i] - '0') * 2;
    std::cout << number << '\n';
    if (number >= 10)
    {
      std::string splittedNum = std::to_string(number);
      std::cout << splittedNum[0] << "," << splittedNum[1] << '\n';
      int num = (splittedNum[0] - '0') + (splittedNum[1] - '0');
      sum_1 += num;
      continue;
    }
    else
    {
      sum_1 += number;
    }
  }

  for (int i = size - 1; i >= 0; i -= 2)
  {
    // if ((stringCard[i] - '0') % 2 == 0)
    // {
    //   continue;
    // }
    int num1 = stringCard[i] - '0';
    sum_2 += num1;
  }
  // int totalSum = sum1 + sum2;
  if ((sum_1 + sum_2) % 10 == 0)
  {
    std::cout << "valid";
  }
  else
  {
    std::cout << "Invalid";
  }

  return 0;
}



