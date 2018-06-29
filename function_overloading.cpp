/*
Function overloading i.e function selection (overloaded resolution) is done by the compiler.
*/
#include <iostream>
const double PI = 3.14;

int add(int a, int b) {
  return a + b;
}

// Overloaded version of add

double add(double a, double b) {
  return a + b;
}

/*
Function overloading isn't allowed if a function signature only varies by return type.
e.g. 
double add(int a, int b)  int add(int a, int b) --- This will be compile time error
*/

// Overlaoded version in the no of args

double area(double length, double width) {
  return length * width;
} 

double area(double radius) {
  return PI * radius * radius;
}


int main(int argc, char** argv) {

  int a = 10, b = 5;
  double x = 2.5, y = 5.4;

  std::cout << "add(10, 5) : " << add(a, b) << std::endl;
  std::cout << "add(2.5, 5.4) : " << add(x, y) << std::endl;
  
  std::cout << "area(2.5, 5.4) : " << area(x, y) << std::endl;
  std::cout << "area(2.5): " << area(x) << std::endl;
  return 0;
}
