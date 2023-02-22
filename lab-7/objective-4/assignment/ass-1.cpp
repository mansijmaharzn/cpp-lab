/*
WAP to enter author name, title and subject of n boobs
and display all the details of a book that matches.
*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Book {
    char name[10], title[10], subject[10];
    public:
        void setData() {
            cout << "Enter author name, title, subject: ";
            cin >> name >> title >> subject;
        }

        void getData() {
            cout << "Name: " << name;
            cout << "\nTitle: " << title;
            cout << "\nSubject: " << subject;
        }

        void getTitle(char* outStr) {
            for(int i=0; i<10; ++i){
                outStr[i] = title[i];
            }
        }
};

class BookFile {
    public:
        void addBook(Book b) {
            ofstream outfile;
            outfile.open("books.txt", ios::app | ios::in);
            outfile.write((char*)&b, sizeof(Book)); // pointer to data of type char
            outfile.close();
        }

        Book getBook(char query[]) {
            ifstream infile;
            infile.open("books.txt", ios::in);
            Book b;
            char titleTmp[10];
            
            while(!infile.eof()) {
                infile.read((char*)&b, sizeof(Book));
                b.getTitle(titleTmp);
                if (strcmp(titleTmp, query) == 0) {
                    infile.close();
                    return b;
                }
                // no error handling done if the data is not found becz kasle tetro lekhexa paper ma :)
            }
        }
};

int main() {
    BookFile f;
    Book b, c;
    char query[10];

    for (int i=0; i<5; i++) {
        b.setData();
        f.addBook(b);
    }

    cout << "Enter book title to search: ";
    cin >> query;

    c = f.getBook(query);
    c.getData();

    return 0;
}