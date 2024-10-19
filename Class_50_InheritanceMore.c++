#include <iostream>
class Shape
{
public:
  double area;
  double volume;
};

class Cube : public Shape
{
public:
  double side;
  Cube(double side)
  {
    this->side = side;
    this->area = side * side * 6;
    this->volume = side * side * side;
  }
};

class Sphere : public Shape
{
public:
  double radius;
  Sphere(double radius)
  {
    
  }
};
int main()
{

  return 0;
}