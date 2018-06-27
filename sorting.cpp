#include <iostream>
#include <algorithm>

void printArray(int arr[]);

int main(int argc, char** argv) {
  std::cout << "This program just sorts the array using inbuild sort functions" << std::endl;
  int arr[7] = {5,3,2,15,10,20,1};
  
  std::cout << "Printing the input array before sort is called" << std::endl;
  printArray(arr);
  
  std::sort(arr, arr+7);
  std::cout << "Printing the input array after sort is called: "<< std::endl;
  printArray(arr);
}

void printArray(int arr[]) {
  for(int i = 0; i < 8; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}
