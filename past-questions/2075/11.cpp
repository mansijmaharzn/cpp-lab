/*
Explain how exceptions are used for handling C++ error in a systematic and OOP-oriented
way with the design that includes multiple exceptions.
*/
#include<iostream>
using namespace std;

void test(int x) {
    try {
        if (x > 0)
            throw x;
        else
            throw 'x';
    }
    
    catch (int x) {
        cout << "\nCaught a integer and that integer is:" << x;
    } catch (char x) {
        cout << "\nCaught a character and that character is:" << x;
    }
}

int main() {
    test(10);
    test(0);

    return 0;
}