// WAP to search a number from a set of numbers(array)
#include<iostream>
using namespace std;

int main() {
    int arr[10];
    int i, reqNum;

    for (i=0; i<10; i++) {
        cout << i << " index: ";
        cin >> arr[i]; 
    }

    cout << "Enter number to search: ";
    cin >> reqNum;

    for (i=0; i<10; i++) {
        if (arr[i] == reqNum) {
            cout << "Found " << reqNum << "at index " << i << " of the array.";
            break;
        }
    }

    return 0;
}