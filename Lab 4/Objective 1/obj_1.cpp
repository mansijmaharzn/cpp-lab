#include<iostream>
using namespace std;

int count = 0;

class contdest {
    public:
        contdest() {
            cout << "\nObject Created = " << count++;
        }

        ~contdest() {
            cout <<"\nObject Destroyed = " << --count;
        }
};

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