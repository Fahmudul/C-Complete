#include <iostream>
int main()
{
    // user input
    // cout << (insertion operator)
    // cin >> (extraction operator)
    std::string name;
    int age;
    std::cout << "What's your age?: " << std::endl;
    std::cin >> age;
    std::cout << "What's your full name bruh?: " << std::endl;
     // This will throw an issue when we input full name with white space
    // std::cin >> name;
    std::cin.ignore();                                         // When we use it will ignore the white space and we are doing this because      getline will take the newline character as an input and will not let the user input
    std::getline(std::cin, name);
    std::cout << "You are " << name << '\n';
    std::cout << "You are " << age << " years old";
    // To fix this we can use getline(cin, name)
    // std::cout << "Your name is " << name << " and your age is " << age << std::endl;
    return 0;
}