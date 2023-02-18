/*
WAP to add two 3 by 3 matrix and display the transpose of the resulting matrix
NOTE: This is arkai(function) wala way of doing (the "better" way)
*/
#include<iostream>
using namespace std;

void getSet(int mat[][3]);
void addSet(int matA[][3], int matB[][3], int sumSet[][3]);
void displaySet(int mat[][3]);
void transposeSet(int mat[][3], int transSet[][3]);

int main() {
    int matA[3][3], matB[3][3], sumSet[3][3], transSet[3][3];

    cout << "Enter for matrix A" << endl;
    getSet(matA);

    cout << "Enter for matrix B" << endl;
    getSet(matB);

    cout << "Adding sets..." << endl;
    addSet(matA, matB, sumSet);

    cout << "Displaying set after addition" << endl;
    displaySet(sumSet);

    cout << "Transposing added set...";
    transposeSet(sumSet, transSet);
    cout << "Displaying transposed set..." << endl;
    displaySet(transSet);

    return 0;
}

void getSet(int mat[][3]) {
    int i, j;

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            cout << "mat[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

void addSet(int matA[][3], int matB[][3], int sumSet[][3]) {
    int i, j;

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            sumSet[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

void displaySet(int mat[][3]) {
    int i, j;

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

void transposeSet(int mat[][3], int transSet[][3]) {
    int i, j;

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            transSet[i][j] = mat[j][i];
        }
    }
}