// Modify obj 1 program using statis variable
#include<iostream>
using namespace std;


class contdest {
    public:
        static int count;

        contdest() {
            cout << "\nObject Created = " << count++;
        }

        ~contdest() {
            cout <<"\nObject Destroyed = " << --count;
        }
};

int contdest::count = 0;

int main() {
    cout << "\nMain Block\n";
    contdest a, b, c;

    {
        cout << "\nBlock 1\n";
        contdest d;
    }

    cout << "\nAgain main Block\n";
    
    contdest e;

    return 0;
}