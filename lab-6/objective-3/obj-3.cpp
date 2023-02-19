#include<iostream>
using namespace std;

class brand {
    char brand_name[10];
    float price;
    public:
        void getdata() {
            cout << "Name of item is: ";
            cin >> brand_name;
            cout << "Price: ";
            cin >> price;
        }

        float getprice() {
            return price;
        }

        brand &cheaper(brand &b) {
            if (price > b.getprice())
                return b;

            else
                return *this;
        }

        void putdata() {
            cout << "Name: " << brand_name;
            cout << "\nPrice: " << price;
        }
};

int main() {
    brand a, b;

    a.getdata();
    b.getdata();

    brand cheap = a.cheaper(b);

    cheap.putdata();

    return 0;
}