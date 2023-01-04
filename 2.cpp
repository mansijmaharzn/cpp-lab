// WAP to find whether the given number is palindrome or not
#include<iostream>
using namespace std;

int checker(int n);

int main() {
    int num;
    float result;

    cout << "Enter Number to check Palindrome: " << endl;
    cin >> num;

    result = checker(num);

    if (result)
        cout << "The number entered is palindrome.";
    
    else
        cout << "The number entered is not palindrome.";

    return 0;
}


int checker(int num) {
    int digit, rem=0, temp;
    float result;

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