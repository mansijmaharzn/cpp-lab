// WAP to find whether the given number is palindrome or not
#include<iostream>
using namespace std;

bool checker(int num);

int main() {
    int num;
    bool result;

    cout << "Enter Number to check Palindrome: " << endl;
    cin >> num;

    result = checker(num);

    if (result)
        cout << "The number entered is palindrome.";
    
    else
        cout << "The number entered is not palindrome.";

    return 0;
}


bool checker(int num) {
    int digit, rem=0, temp;

    temp = num;

    while (num != 0) {
        digit = num % 10;
        rem = (rem * 10) + digit;
        num = num / 10;
    }

    if (temp != rem)
        return false;
    
    return true;
}