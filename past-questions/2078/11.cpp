// Write a program that reads content of file data.txt and displays the content in monitor.
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file;
    file.open("data.txt", ios::in);

    char ch[50];
    while(!file.eof()) {
        file.getline(ch, 50);
        cout << ch << endl;
    }

    file.close();

    return 0;
}