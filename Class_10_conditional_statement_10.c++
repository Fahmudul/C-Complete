#include <iostream>
int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age >= 18)
    {
        std::cout << "You can vote" << std::endl;
    }
    else if (age == 17)
    {
        std::cout << "You can vote after 1 year" << std::endl;
    }
    else
    {
        std::cout << "You can vote after " << 18 - age << " years" << std::endl;
    }
    return 0;
}