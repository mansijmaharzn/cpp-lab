// Objective #3
#include<iostream>
#include<fstream>
using namespace std;

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
            cout << "\nSubject: " << subject;
            cout << "\nAuthor: " << author;
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
            outfile.open(file_name, ios::app | ios::in);
            /*
                | (bitwise OR operator) is used to combine the two ios flags,
                meaning that passing ios::in | ios::out to the constructor
                of std::fstream enables both input and output for the stream.
            */
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

    b.getdata();
    f.appendbooks(b);

    c = f.getbook();
    c.putdata();

    return 0;
}