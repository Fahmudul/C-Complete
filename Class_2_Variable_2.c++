#include <iostream>
/**
 * The main function of the C++ program.
 *
 * @return 0 indicating successful execution of the program.
 */
int main()
{
    // Declare an integer variable x
    int x;

    // Declare an integer variable y and assign it the value 6
    int y = 6;

    // Assign the value 5 to x
    x = 5;

    // Declare a float variable price and assign it the value 12.3
    float price = 12.3;

    // Single character

    // Declare a character variable grade and assign it the value 'A'
    char grade = 'A';

    // Declare a character variable initial and assign it the value 'C'
    char initial = 'C';

    // Declare a character variable dollarSign and assign it the value '$'
    char dollarSign = '$';

    // boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale = true;

    // String (objects that represents a sequence of characters)
    std::string name = "siam";
    // std::cout << "Student = " << student << std::endl;
    // Print the value of price followed by a newline
    // std::cout << "Price = " << price << '\n';

    // Print the value of x followed by a newline
    // std::cout << "x = " << x << "\n";

    // Print the value of y
    // std::cout << "y = " << y;

    // Print the value of grade followed by a newline
    std::cout << "Grade = " << grade << "\n"
              << "Student name is " << name << ' ' << "Buying a product price is " << price;

    // Return a value of 0 indicating successful execution of the program
    return 0;
}
