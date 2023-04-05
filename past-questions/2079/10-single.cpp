// Write a program for illustrating use of new and delete.

#include <iostream>
using namespace std;

int main() {
  // Dynamically allocate an integer
  int* p = new int;

  // Assign a value to the integer
  *p = 42;

  // Print the value of the integer
  cout << "The value of the integer is " << *p;

  // Deallocate the integer
  delete p;

  return 0;
}