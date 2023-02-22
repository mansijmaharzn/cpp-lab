// Objective #3
#include<iostream>
#include<fstream>

class book {
    char title[10], subject[10], author[10];
    public:
        void getdata() {
            cout << "Title: ";
            cin >> title;
            cout << "Subject: ";
            cin >> subject;
            cout << "Author: ";
            cin >> author;
        }

        void putdata() {
            cout << "Title: " << title;
            cout << "Subject: " << subject;
            cout << "Author: " << author;
        }
};

class book_file {
    char file_name[10];
    public:
        book_file() {
            cout << "File Name: ";
            cin >> file_name;
        }

        void appendbooks(book b) {
            ofstream outfile;
            outfile.open(file_name, ios::app || ios::in);
            outfile.write((char*)&b, sizeof(book)); // pointer to data of type char
            outfile.close();
        }

        book getbook() {
            ifstream infile;
            infile.open(file_name, ios::in);
            book b;
            infile.read((char*)&b, sizeof(book));
            infile.close();

            return b;
        }
};

int main() {
    book_file f;
    book b, c;

    b.getdata
}