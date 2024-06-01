#include <iostream>
// This function will show a  user's balance
void showBalance(double balance);
double depostit();
double withDraw(double currentBalance);
int main()
{
  // ** Banking system management
  // Initial balance
  double balance = 10;
  int choice = 1;
  // Welcome screen
  do
  {
    std::cout << "----------- Welcome to Central Bank ----------- \n";
    std::cout << "----------------------------------------------- \n";
    std::cout << "Enter action (1-Deposit, 2-Withdraw, 3-Balance, 4-Exit): \n";
    std::cin >> choice;
    std::cin.clear();
    fflush(stdin);
    // std::cin.ignore();
    switch (choice)
    {
    case 1:
      showBalance(balance);
      // std::cin >> balance;
      break;
    case 2:
      balance += depostit();
      showBalance(balance);

      break;

    case 3:
      std::cout << "Working on it";
      balance -= withDraw(balance);
      showBalance(balance);
      break;
    case 4:
      std::cout << "Thank you for using our service";
      break;
    default:
      std::cout << "Invalid choice \n";
      break;
    }

  } while (choice != 4);
  return 0;
}

void showBalance(double balance)
{
  std::cout << "Balance: " << balance << std::endl;
}
double depostit()
{
  int depositeAmount;
  std::cout << "Enter amount to deposit: \n";
  std::cin >> depositeAmount;
  if (depositeAmount < 0)
  {
    std::cout << "Invalid amount";
  }
  else
  {
    return depositeAmount;
  }
}

double withDraw(double currentBalance)
{
  int withDrawnAmount;
  std::cout << "Enter amount to withdraw: \n";
  std::cin >> withDrawnAmount;
  if (withDrawnAmount > currentBalance)
  {
    std::cout << "Insufficient Balance";
    return currentBalance;
  }
  else if (withDrawnAmount <= 0)
  {
    std::cout << "Invalid amount enter more!";
  }
  else
  {
    return withDrawnAmount;
  }
}
