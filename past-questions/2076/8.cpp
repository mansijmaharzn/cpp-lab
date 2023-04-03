/*
How can you define catch statement that can catch any type of exception? Illustrate the use of
multiple catch statement with example.
*/
#include <iostream>
using namespace std;
 
int main() {
    try  {
       throw 10;
    }
    //catching character exception
    catch (char c)  {
        cout << "Caught " << c;
    }
    //catching all exception
    catch (...){
        cout << "Exception Occured\n";
    }
    return 0;
}