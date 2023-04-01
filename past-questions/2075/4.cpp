/*
Write a member function called reverseit() that reverses a string
( an array of character). Use a for loop that swaps the first and
last characters, then the second and next-to last characters and
so on. The string should be passed to reverseit() as an argument.
*/

#include<iostream>
using namespace std;

class Stri {
    public:
        void reverseit(char *str, int len) { // <- formal arg as a pointer
            int start = 0;
            int end = len - 1; // index starts from 0
            int i = 0;

            while (i<((len)/2)) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
                i++;
            }
        }
};

int main() {
    Stri s;

    char str[10] = "Mansij";

    s.reverseit(str, 6); // total length counted from 1

    cout << str;

    return 0;
}