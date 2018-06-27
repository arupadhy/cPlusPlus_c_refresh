#include <iostream>

using namespace std;

int identityFunction(int a = 10 ) {
  return a;
}

int main(int argc, char** argv) {

  int x = 5, y;
  
  cout << "After passing int param to identityFunction " << identityFunction(x) << endl;

  cout << "After passing no param to identityFunction " << identityFunction() << endl;
  
  return 0;
}
