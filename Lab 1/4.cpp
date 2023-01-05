// WAP to search a number from a set of numbers(array)
#include<iostream>
using namespace std;

int main() {
    int arr[5];
    int i, reqNum;
    bool flag=false;

    for (i=0; i<5; i++) {
        cout << i << " index: ";
        cin >> arr[i]; 
    }

    cout << "Enter number to search: ";
    cin >> reqNum;

    for (i=0; i<5; i++) {
        if (arr[i] == reqNum) {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Found " << reqNum << " at index " << i << " of the array.";
    else
        cout << "Didn't find " << reqNum << " in the set.";

    return 0;
}