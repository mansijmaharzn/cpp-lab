/*
Create a class person and create two derived class employee and student inherited from the
class person. Now create a class manager which is derived from two base classes
employee and student. Show the use of virtual base class
*/

#include<iostream>
using namespace std;

class Person {
    public:
        void display() {
            cout << "Hey! I'm from class Person!" << endl;
        }
};

class Employee : public virtual Person {

};

class Student : public virtual Person {

};

class Manager : public Employee, public Student {

};

int main() {
    Manager manager;

    manager.display();

    return 0;
}