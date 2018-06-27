#include <iostream>

int main(int argc, char** argv) {
  short b;
  unsigned short a;
  short arr[] = {1,2,5};
  std::cout << "Size of unsigned short : " << sizeof(a) << std::endl;
  std::cout << "Size of short: " << sizeof(short) << std::endl;
  std::cout << "Size of int: " << sizeof(int) << std::endl;
  std::cout << "Size of : arr[]: " << sizeof(arr) << std::endl;
  std::cout << "Length of array: " << sizeof(arr) / sizeof(short) << std::endl;
}
