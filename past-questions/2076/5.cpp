// example of new and delete
#include<iostream>
using namespace std;

int main() {
    // Allocate memory for an integer using the new operator
    int *ptr = new int;
    
    // Assign a value to the integer
    *ptr = 42;
    
    // Print the value of the integer
    cout << "The value of the integer is: " << *ptr << endl;
    
    // Deallocate the memory using the delete operator
    delete ptr;
    
    return 0;
}