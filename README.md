# C Translation Task

This repository contains a task to **translate C++ code into C**.  

---

## Original C++ Code

```cpp
#include <iostream>
#include <string>

class Person {
private:
   std::string name;
   int age;
   double height;

public:
   // Constructors
   Person() : name("Unknown"), age(0), height(0.0) {}
   Person(std::string n, int a, double h) : name(n), age(a), height(h) {}

   // Getters
   std::string getName() const { return name; }
   int getAge() const { return age; }
   double getHeight() const { return height; }

   // Setters
   void setName(const std::string& n) { name = n; }
   void setAge(int a) { age = a; }
   void setHeight(double h) { height = h; }

   // Overloaded member functions
   void printInfo() const {
       std::cout << "Name: " << name << ", Age: " << age
                 << ", Height: " << height << std::endl;
   }

   void printInfo(bool showHeight) const {
       std::cout << "Name: " << name << ", Age: " << age;
       if (showHeight) std::cout << ", Height: " << height;
       std::cout << std::endl;
   }
};

int main() {
   Person p1("Bob", 19, 1.75);

   p1.printInfo();           // Default info
   p1.printInfo(true);       // Conditional info

   p1.setAge(20);
   std::cout << "Updated age: " << p1.getAge() << std::endl;

   return 0;
}