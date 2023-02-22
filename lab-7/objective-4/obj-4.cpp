/*
Objective #4 -> ik 3 lekhya cha file ma but im not writing 3.1 and 3.2 ;)
WAP to write and read the information about the players name, age, and run.
Use read() and write() functions. User should press y to continue entering the
information of next players and n for termination.
*/
#include<iostream>
#include<fstream>
using namespace std;

class player {
    char name[20], age[20];
    int runs;
    public:
        void getdata() {
            cout << "Enter player name, age, and runs: ";
            cin >> name >> age >> runs;
        }
        void putdata() {
            cout << "Name: " << name << "\tAge: " << age << "\tRuns: " << runs << endl;
        }
};

int main() {
    char next = 'y';
    player p;

    ofstream fout("player.dat", ios::out | ios::binary);
    while(next=='y') {
        p.getdata();
        fout.write((char*)&p, sizeof(p));
        printf("Continue? ");
        fflush(stdin);
        next = getchar();
    }
    fout.close();

    ifstream fin("player.dat", ios::out | ios::binary);
    while(!fin.eof()) {
        fin.read((char*)&p, sizeof(p));
        if( fin.eof() ) break; // 😎 solved error on sir's code LMAO
        p.putdata();
    }
    fin.close();

    return 0;
}