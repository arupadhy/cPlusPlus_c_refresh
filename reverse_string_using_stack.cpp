#include <iostream>
#include <stack>
#include <string>

int main(int argc, char** argv) {
  std::stack<char> myStack;
  std::string input;

  std::cout << "This program will reverse a string using c++ stack" << std::endl;
  std::cout << "Enter the string" << std::endl;
  std::cin >> input;

  for(int i=0; i<input.length(); i++) {
    myStack.push(input[i]);
  }

  while(!myStack.empty()) {
    std::cout << myStack.top();
    myStack.pop();
  }

  std::cout << std::endl;
  
  return 0;
}
