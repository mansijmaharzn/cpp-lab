/*
WAP to enter the name, reg_no, and grade of 10 students and store them in file.
Modify the record of particular students and display the contents of file before
and after modifying.
*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Student {
    char name[10], reg_no[5], grade[2];
    public:
        void setData() {
            cout << "Enter name, reg_no, grade: ";
            cin >> name >> reg_no >> grade;
        }

        void getData() {
            cout << "Name: " << name;
            cout << "\nReg No: " << reg_no;
            cout << "\nGrade: " << grade << endl;
        }

        void getReg(char* outStr) {
            for(int i=0; i<5; ++i){
                outStr[i] = reg_no[i];
            }
        }
};

class StudentFile {
    public:
        void addStudent(Student b) {
            ofstream outfile;
            outfile.open("students.txt", ios::app | ios::in);
            outfile.write((char*)&b, sizeof(Student)); // pointer to data of type char
            outfile.close();
        }

        void getStudent(char query[], Student a) {
            fstream infile;
            infile.open("students.txt", ios::in | ios::out);
            Student b, c;
            char regNoTmp[10];
            int pos;
            
            while(!infile.eof()) {
                pos = infile.tellg();
                infile.read((char*)&b, sizeof(Student));
                b.getReg(regNoTmp);
                if (strcmp(regNoTmp, query) == 0) {
                    cout << "Before Modification" << endl;
                    b.getData();

                    // modifying
                    infile.seekg(pos);
                    infile.write((char*)&a, sizeof(Student));
                    cout << "After Modification" << endl;
                    infile.seekg(pos);
                    infile.read((char*)&c, sizeof(Student));
                    c.getData();

                    infile.close();
                    break;
                }
            }
        }
};

int main() {
    StudentFile f;
    Student b, c;
    char query[5];

    for (int i=0; i<2; i++) {
        b.setData();
        f.addStudent(b);
    }

    cout << "Enter reg no to modify: ";
    cin >> query;

    cout << "Enter data to overwrite" << endl;
    b.setData();

    f.getStudent(query, b);

    return 0;
}