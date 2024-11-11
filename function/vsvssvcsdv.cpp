#include <iostream>
using namespace std;
class Car {
public:
  Car() {
    cout << "Car constructor called!" <<endl;
  }
  ~Car() {
    cout << "Car destructor called!" <<endl;
  }
};

int main() {
  cout << "Creating a car..." << endl;
  Car myCar;
    cout << "Doing some operations with the car..." << endl;
    cout << "Exiting the program..." << endl;
}






