// Sum of n natural numbers
#include<iostream>
using namespace std;

class add {
    int n, sum;

    public:
        add() {
            sum=0;
        }

        void getn() {
            cout << "The number of terms is:\t";
            cin >> n;
        }

        void getsum() {
            for (int i=0; i<=n; i++) {
                sum += i;
            }
        }

        ~add() {
            cout << "\nThe sum of first" << n << "natural number is " << sum;
        }
};

int main() {
    add ad;

    ad.getn();
    ad.getsum();

    {
        add a;
        a.getn();
        a.getsum();
    }

    return 0;
}