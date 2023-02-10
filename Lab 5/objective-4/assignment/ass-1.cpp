/*
Find S1 + S2 where operators has usual meaning and S1 And S2 are valid strings.
*/

#include<iostream>
#include<cstring>
using namespace std;

const int sz = 50;

class stri {
    char str[sz];
    public:
        stri() {
            strcpy(str, " ");
        }
        stri(char s[]) {
            strcpy(str, s);
        }
        void display() {
            cout << str << endl;
        }
        stri operator +=(stri ss) {
            if ((strlen(str) + strlen(ss.str)) < sz) {
                strcat(str, ss.str); // concatenate
            } else {
                cout << "String Overflow";
            }
        }
};

int main() {
    cout << "Before Concatenation" << endl;

    stri s1 = "Happy Birthday";
    stri s2 = "to You";

    s1.display();
    s2.display();

    s1 += s2;

    cout << "After Concatenation" << endl;
    s1.display();

    return 0;
}