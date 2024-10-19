#include <iostream>

// **What is a Struct?**

// In C++, a `struct` (short for "structure") is a user-defined data type that allows you to combine multiple variables of different data types into a single unit. A `struct` is similar to a `class`, but with some key differences.

// **Key characteristics of a Struct:**

// 1. A `struct` is a collection of variables of different data types.
// 2. A `struct` is a value type, meaning that it is stored on the stack.
// 3. A `struct` has public members by default, which means that they can be accessed directly from outside the `struct`.
// 4. A `struct` cannot inherit from another `struct` or `class`.

// **Example:**
// ```cpp

struct Employee
{
  std::string name;
  int age;
  bool currentlyEmployed;
  int salary;
};
struct Person
{
  int age;
  std::string name;
  float height;
};
// ```
// In this example, we define a `struct` called `Person` that has three members:

// * `age`: an `int` variable to store the person's age.
// * `name`: a `string` variable to store the person's name.
// * `height`: a `float` variable to store the person's height.

// **Using the Struct:**
// ```cpp
int main()
{
  // creating instance of Person with john here john will have access to all member in the struct have. kinda typeScript's interface
  Person john;
  john.age = 30;
  john.name = "John Doe";
  john.height = 1.75f;

  std::cout << "Name: " << john.name << '\n';
  std::cout << "Age: " << john.age << '\n';
  std::cout << "Height: " << john.height << '\n';

  return 0;
}
// ```
// In this example, we create an instance of the `Person` struct called `john`. We can access and modify the members of the struct directly, just like regular variables.

// **Benefits of using Structs:**

// 1. **Grouping related data**: A `struct` allows you to group related data together, making it easier to manage and understand.
// 2. **Improved code organization**: By using a `struct`, you can keep related data and functions together, making your code more organized and maintainable.
// 3. **Faster data access**: Since a `struct` is a value type, accessing its members is generally faster than accessing members of a `class`.

// When to use a `struct`:

// * When you need to group related data together.
// * When you need to create a simple, lightweight data structure.
// * When you don't need to use inheritance or polymorphism.

// Note that in modern C++, the differences between `struct` and `class` are mostly stylistic, and you can use either one depending on your personal preference. However, it's generally recommended to use `struct` for simple, lightweight data structures and `class` for more complex, object-oriented designs.