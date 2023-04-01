/*
What is the principle reason for using default arguments in the function?
Explain how missing arguments and default arguments are handled by the 
function simultaneously?
*/

/*
- A function can be called without specifying all its arguments.
But it does not work on any general function. The function declaration must
provide default values for those arguments that are not specified.
When the arguments are missing from function call, default value will be
used for calculation.
- Default values should be assigned from right to left.
*/

#include<iostream>
using namespace std;

int sum(int a, int b=5, int c=10) { // <- right to left
    return a + b + c;
}

int main() {
    cout << sum(11) << endl;

    cout << sum(11, 12) << endl;

    cout << sum(11, 12, 13) << endl;

    return 0;
}
