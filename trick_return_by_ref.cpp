/*
This example illustrates tricky stuff that could happen while using return by ref
*/

#include <iostream>

using namespace std;

int& return_by_ref(int& x) {
  return x;
}

int main(int argc, char** argv) {

  int a = 10, b;
  b = return_by_ref(a);

  cout << "a = " << a << " and b = " << b << endl;
  
  // This is tricky and will change the reference
  return_by_ref(a) = 3;
  
  cout << "a = " << a << endl;
  
  return 0;
}
