#include <iostream>
#include <cmath>
int main()
{
    double base, height, hypotenuse;
    std::cout << "Enter side base ";
    std::cin >> base;
    std::cout << "Enter side height ";
    std::cin >> height;
    hypotenuse = sqrt(pow(base, 2) + pow(height, 2));
    std::cout << "Hypotenuse = " << hypotenuse;
    return 0;
}