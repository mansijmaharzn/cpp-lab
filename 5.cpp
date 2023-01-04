#include<iostream>
using namespace std;

int main() {
    int matA[3][3], matB[3][3], sumSet[3][3], trans[3][3];
    int i, j;

    cout << "Enter for matrix A" << endl;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            cout << "matA[" << i << "][" << j << "]: ";
            cin >> matA[i][j];
        }
    }

    cout << "Enter for matrix B" << endl;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            cout << "matB[" << i << "][" << j << "]: ";
            cin >> matB[i][j];
        }
    }

    cout << "Adding Sets..." << endl;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            sumSet[i][j] = matA[i][j] + matB[i][j];
        }
    }

    cout << "Transposing the result set..." << endl;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            trans[i][j] = sumSet[j][i];
        }
    }

    cout << "Phew! Now showing" << endl;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            cout << trans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}