// How can we achieve dynamic polymorphism briefly? Explain with example.
#include <iostream>
using namespace std;

class Shape {
    public:
        virtual void draw() {
            cout << "Drawing a shape." << endl;
        }
};

class Circle : public Shape {
    public:
        void draw() {
            cout << "Drawing a circle." << endl;
        }
};

class Rectangle : public Shape {
    public:
        void draw() {
            cout << "Drawing a rectangle." << endl;
        }
};

int main() {
    Shape* s;

    Circle c;
    Rectangle r;

    s = &c;
    s->draw(); // Calls Circle's draw()

    s = &r;
    s->draw(); // Calls Rectangle's draw()

    return 0;
}
