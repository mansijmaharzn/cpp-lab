// WAP to reverse an array
#include<iostream>
using namespace std;

class Array {
    int arr[5];
    public:
        void getArr() {
            for (int i=0; i<5; i++) {
                cout << i+1 << ": ";
                cin >> arr[i];
            }
        }

        void reverseArr() {
            int start=0, end=5-1; // end=(total-1), cuz index starts from 0
            while(start < end) {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        }

        void showArr() {
            for (int i=0; i<5; i++) {
                cout << arr[i] << "\t";
            }
            cout << "\n";
        }
};

int main() {
    Array a;

    a.getArr();
    a.showArr();
    a.reverseArr();
    a.showArr();

    return 0;
}