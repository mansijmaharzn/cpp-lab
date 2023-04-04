// Explain exception handling with try... catch by using suitable example.
#include <iostream>  
using namespace std;  
float division(int x, int y) {  
    if( y == 0 ) {  
        throw "Can't divide by 0 idiot!";  
    }  
    return (x/y);  
}  
int main () {  
    int i = 25;  
    int j = 0;  
    float k = 0;  
    try {  
        k = division(i, j);  
        cout << k << endl;  
    }catch (char* e) {  
        cerr << e << endl;  
    }  
    return 0;  
}