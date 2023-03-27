// What is the use of get and getline functions? Explain with suitable example.
/*
get():
    cin.get() is used for accessing character array. It includes white space characters.
    Generally, cin with an extraction operator (>>) terminates when whitespace is found.
    However, cin.get() reads a string with the whitespace.
    Syntax:
        cin.get(string_name, size);

getline():
    The cin is an object which is used to take input from the user but does not allow to take the input in multiple lines.
    To accept the multiple lines, we use the getline() function.
    It is a pre-defined function defined in a <string.h> header file used to accept a line or a string
    from the input stream until the delimiting character is encountered.
*/

// NOTE: Run Separately
// program for get()
#include <iostream>
using namespace std;
  
int main() {
    char name[25];
    cin.get(name, 25);
    cout << name;
  
    return 0;
}

// program for getline()
#include<iostream>  
#include<cstring>
using namespace std;

int main() {  
    char name[40];

    cout << "Enter your name: ";  
    cin.getline(name, 40); // without delimiting character
    cout << "Hello " << name << endl;

    cout << "Enter your name: ";  
    cin.getline(name, 40, ' '); // with delimiting character
    cout << "Hello " << name << endl;

    return 0;
}