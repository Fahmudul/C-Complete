#include <iostream>
#include <ctime>
int main()
{
  // Number guessing game
  srand(time(0));
  int secret = rand() % 5 + 1;
  std::string exit;
  int guess;
  int guessScore = 0;
  int wrongGuess = 0;
  while (secret != guess)
  {
    std::cout << "Enter you guess: \n";
    std::cin >> guess;
    if (guess == secret)
    {
      guessScore++;
    }
    else
    {
      wrongGuess++;
    }
  }
  std::cout << "Your score is: " << guessScore << std::endl;
  std::cout << "Your wrong guess is: " << wrongGuess << std::endl;
  return 0;
}