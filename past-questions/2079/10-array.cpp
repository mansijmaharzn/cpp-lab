// Write a program for illustrating use of new and delete.

#include <iostream>
using namespace std;

int main() {
  // Dynamically allocate an array of integers
  int* arr = new int[5];

  // Assign values to the array
  for (int i = 0; i < 5; i++) {
    arr[i] = i * 10;
  }

  // Print the values of the array
  cout << "The values of the array are: ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  // Deallocate the array
  delete[] arr;

  return 0;
}
