#include <iostream>

using namespace std;
/*
 some common pitfalls in reference

 wrong                                         correct
int& i; // compile time error                  int& i = j;

int& i = 5; // wrong                            const int& i = 5;

int& i = j + k // wrong                         const int& i = j + k;;
*/

int main(int argc, char** argv) {
  cout << "This program illustrates reference types and their meaning" << endl;
  int a = 10, &b = a; // b is a reference to a (in other words alias of a) => a and b have same memory

  cout << "a =  " << a << ", b = " << b << endl;
  cout << "Address of a, &a = " << &a << ", Address of b, &b = " <<  &b << endl;
  
  // lets update a to 11, b will automatically change
  ++a;
  
  cout << "a = " << a << ", b = " << b << endl;
  
  // lets update b to 12, a will automatically change
  ++b;

  cout << "a = " << a << ", b = " << b << endl;
  
  return 0;
}
