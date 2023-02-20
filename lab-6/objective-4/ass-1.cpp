/*
WAP having Student as an abstract class and create derived class such as
Engineering, Science and Medical. Create their objects process them and
access them using array of base class pointers.
*/

#include <iostream>
using namespace std;

// Base class
class Student {
public:
    virtual void display() {
        cout << "Student" << endl;
    }
};

// Derived classes
class Engineering : public Student {
public:
    void display() override {
        cout << "Engineering Student" << endl;
    }
};

class Science : public Student {
public:
    void display() override {
        cout << "Science Student" << endl;
    }
};

class Medical : public Student {
public:
    void display() override {
        cout << "Medical Student" << endl;
    }
};

int main() {
    const int SIZE = 3;
    Student* students[SIZE]; // Array of base class pointers

    students[0] = new Engineering();
    students[1] = new Science();
    students[2] = new Medical();

    // Process objects
    for (int i = 0; i < SIZE; i++) {
        students[i]->display();
    }

    return 0;
}