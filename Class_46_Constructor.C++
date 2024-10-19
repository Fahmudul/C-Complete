#include <iostream>
class Student
{
public:
  std::string name;
  int age;
  double gpa;

  // Initializing a constructor. Constructor name is also same as the class name
  // Student(std::string x, int y, double z) // Here if we use different parameter name. We will assign the paramter to attribute like below
  // {
  //   name = x;
  //   age = y;
    // gpa = z;
  //   // If parameter name are same as argument. we will use this->argumentName like below
  // }
  Student(std::string name, int age, double gpa) // If parameter name are same as attribute. we will use this->attributeName like below
  {
    this->name = name;
    this->age = age;
    this->gpa = gpa;
    //
  }
};
int main()
{
  Student Siam("siam", 21, 3.77);
  std::cout << Siam.name << '\n';
  std::cout << Siam.age << '\n';
  std::cout << Siam.gpa << '\n';
  return 0;
}