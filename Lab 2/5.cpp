/*
Calculate the tax paid by a person if the tax free amount
a. For an unmarried person is Rs. 350000
b. For a married person is Rs. 450000
Default tax rate = 15%
*/
#include<iostream>
using namespace std;

bool checkTaxable(int mStatus, int salary) {
    if (mStatus == 0) { // unmarried
        if (salary <= 350000) // not taxable
            return false;
        
        return true;
    } else if (mStatus == 1) { // married
        if (salary <= 450000) // not taxable
            return false;

        return true;
    }
}

double calcTax(int salary) {
    return 0.15 * salary; // 15% of salary
}

int main() {
    int salary, mStatus;
    bool taxable;
    double taxPay;

    cout << "Enter married(1) or unmarried(0): ";
    cin >> mStatus;

    cout << "Enter your salary: ";
    cin >> salary;

    taxable = checkTaxable(mStatus, salary);

    if (taxable) {
        taxPay = calcTax(salary);
        cout << "You have to pay Rs." << taxPay << " as tax." << endl;
    } else {
        cout << "You are not taxable." << endl;
    }

    return 0;
}