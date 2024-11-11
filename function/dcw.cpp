#include<iostream>
class Shape {
public:
  void display() {
    std::cout << "This is a shape." << std::endl;
  }
};

// Derived class inheriting from Shape
class Circle : public Shape {
public:
  void draw() {
    std::cout << "Drawing a circle." << std::endl;
  }
};

int main() {
  Circle c;
  c.display(); // Accessing base class member
  c.draw();    // Accessing derived class member
  return 0;
}
