// Copy the source file into destination file.

// NOTE: You need to have "source.txt" with some texts in the same dir as this file in order to work :)
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    char str[10];

    fstream fin, fout;
    fin.open("source.txt", ios::in);
    fout.open("destination.txt", ios::out);

    while(!fin.eof()) {
        fin.getline(str, 10);
        fout << str << endl;
    }

    fin.close();
    fout.close();
    
    return 0;
}