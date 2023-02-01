/*
Count the positive, negative and zeros from given n input numbers.
*/

#include<iostream>
using namespace std;

class Count {
    int n, nums[20], positiveCount, negativeCount, zeroCount;
    public:
        Count() {
            positiveCount = 0;
            negativeCount = 0;
            zeroCount = 0;
        }

        void getNums() {
            cout << "The number of terms: ";
            cin >> n;

            for (int i=0; i<n; i++) {
                cout << i+1 << ": ";
                cin >> nums[i];
            }
        }

        void calculate() {
            for (int i=0; i<n; i++) {
                if (nums[i] > 0)
                    positiveCount++;
                else if (nums[i] < 0)
                    negativeCount++;
                else
                    zeroCount++;
            }
        }

        ~Count() {
            cout << "Total positive numbers is " << positiveCount << endl;
            cout << "Total negative numbers is " << negativeCount << endl;
            cout << "Total zero numbers is " << zeroCount << endl;

        }
};

int main() {
    Count count;

    count.getNums();

    count.calculate();

    return 0;
}