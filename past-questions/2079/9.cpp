// Write a program to illustrate the use of seekg() and tellg().
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("9.txt");
    
    // Get the current position in the file
    
    int position = file.tellg();
    // streampos position = file.tellg(); // or this
    cout << "Current position: " << position << endl;
    
    // Read the first character in the file
    char ch;
    file.get(ch);
    cout << "First character: " << ch << endl;
    
    // Move the file position to the third character
    file.seekg(2); // position starts from 0
    
    // Read the third character in the file
    file.get(ch);
    cout << "Third character: " << ch << endl;
    
    // Get the current position in the file again
    position = file.tellg();
    cout << "Current position: " << position <<    endl;
    
    file.close();
    return 0;
}