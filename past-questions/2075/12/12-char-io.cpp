// character I/O example
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file("example.txt");
    file << "Hello, world!";
    file.close();

    ifstream input("example.txt");
    char str[30];
    while(!input.eof()) {
        input.getline(str, 30); // variable, size
        cout << str << endl;
    }
    input.close();
    
    return 0;
}
