// stri manipulation using operator overloading

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
        stri operator +(stri ss) {
            if ((strlen(str) + strlen(ss.str)) < sz) {
                stri tmp;
                strcpy(tmp.str, str); // copy
                strcat(tmp.str, ss.str); // concatenate

                return (tmp);
            } else {
                cout << "String Overflow";
            }
        }
};

int main() {
    cout << "Before Concatenation" << endl;

    stri s1 = "Happy Birthday";
    stri s2 = "to You";

    stri s3;

    s1.display();
    s2.display();

    s3 = s1 + s2;

    cout << "After Concatenation" << endl;
    s3.display();

    return 0;
}