#include <iostream>
#include <ctime>
int main()
{
  // Today we are goint to make a rock paper scissor game

  // Lets start
  std::string player1;
  char player2;

  srand(time(0));
  while (true)

  {
    std::cout << "Welcome to rock paper scissor game" << std::endl;
    std::cout << "Enter your choice" << std::endl;
    std::cin >> player1;
    player2 = rand() % 3 + 1;

    if (player1 == "exit")
    {
      std::cout << "Thanks for playing" << std::endl;

      return false;
    }
    if (player1 != "rock" && player1 != "paper" && player1 != "scissor")
    {
      std::cout << "Invalid input" << std::endl;
    }
    else if (player1 == "rock" || player1 == "paper" || player1 == "scissor")
    {
      if (player1 == "rock" && player2 == 1 || player1 == "paper" && player2 == 2 || player1 == "scissor" && player2 == 3)
      {
        std::cout << "Tie" << std::endl;
      }
      else if (player1 == "rock" && player2 == 3 /*player2 == "scissor"*/ || player1 == "paper" && player2 == 1 /*player2 == "rock"*/ || player1 == "scissor" && player2 == 2 /*player2 == "paper"*/)
      {
        std::cout << "You win" << std::endl;
      }
      else
      {
        std::cout << "You lose" << std::endl;
      }
    }
  }
  return 0;
}