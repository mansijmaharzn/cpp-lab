/*
WAP to add two input matrix.
*/

#include<iostream>
using namespace std;

class Matrix {
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

        Matrix operator +(Matrix a) {
            Matrix x;
            for (int i=0; i<2; i++) {
                for (int j=0; j<2; j++) {
                    x.mat[i][j] = mat[i][j] + a.mat[i][j];
                }
            }

            return x;
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
    Matrix m1, m2, m3;

    cout << "Enter first mat:" << endl;
    m1.getMat();
    cout << "Enter second mat:" << endl;
    m2.getMat();

    m3 = m1 + m2;

    cout << "After addition:" << endl;
    m3.display();

    return 0;
}