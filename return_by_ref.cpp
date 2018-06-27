/*
 c++ also allows a function to return by reference. This example illustrates return by ref
*/
#include <iostream>

using namespace std;

// This function accepts arguments by reference but returns by value
int function_that_returns_by_value(int &x) {
  cout << "x = " << x << " Address of x, &x = " << &x << endl;
  return (x);
}

// This function accepts arguments by reference and also returns by ref
int& function_that_returns_by_ref(int &x) {
  cout << "x = " << x << "Address of x, &x = " << &x << endl;
  return (x);
}

int main(int argc, char** argv) {
  
  int a = 10;
  cout << "a = " << a << " Address of a, &a = " << &a << endl;
  
  const int& b = function_that_returns_by_value(a); // const is necessary here
  const int& c = function_that_returns_by_ref(a); // const is optional here

  cout << "b: " << b << " Address of b, &b: " << &b << endl; // &b is diff than &a coz copying happens when// function_that_returns_by_value returns the value
  cout << "c: " << c << " Address of c, &c: " << &c << endl;
  return 0;
}
