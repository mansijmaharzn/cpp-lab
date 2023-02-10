/*
WAP to multiply two matrixes
*/
#include<iostream>
using namespace std;

class Multi {
    int mat[2][2];
    public:
        void getMat() {
            for (int i=0; i<2; i++) {
                for (int j=0; j<2; j++) {
                    cout << "[" << i << "][" << j << "]: ";
                    cin >> mat[i][j];
                }
            }
        }

        Multi operator *(Multi a) {
            Multi x;
            for (int i=0; i<2; i++) {
                for (int j=0; j<2; j++) {
                    x.mat[i][j] = 0;
                    for (int k=0; k<2; k++) {
                        x.mat[i][j] += mat[i][k] * a.mat[k][j];
                    }
                }
            }

            return (x);
        }

        void display() {
            for (int i=0; i<2; i++) {
                for (int j=0; j<2; j++) {
                    cout << mat[i][j] << "\t";
                }
                cout << "\n";
            }
        }
};

int main() {
    Multi m1, m2, m3;

    cout << "Enter for matrix 1" << endl;
    m1.getMat();
    cout << "Enter for matrix 2" << endl;
    m2.getMat();

    m3 = m1 * m2;

    cout << "Multiplied matrix:" << endl;
    m3.display();

    return 0;
}