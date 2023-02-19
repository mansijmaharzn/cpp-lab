#include<iostream>
#include<cmath>
using namespace std;

class shape {
    public:
    virtual float area() {} //virtual function
    virtual float perimeter()=0; //pure virtual function
    virtual void getdata()=0; //pure virtual function
};

class rectangle:public shape{
    float l, b;
    public:
    void getdata(){
        cout << "Length=";
        cin >> l;
        cout << "Breadth=";
        cin >> b;
    }
    float area(){
        return(l*b);
    }
    float perimeter(){
        return(2*(l+b));
    }
};
class triangle:public shape{
    float a, b, c;
    public:
    void getdata(){
        cout << "\n\nThe three sides of a triangle are: ";
        cin >> a >> b >> c;    
    }
    float area(){
        float s,A;
        s=(a+b+c)/2.0;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        return(A);

    }
    float perimeter(){
        return(a+b+c);
    }
};

int main(){
    shape *ps;
    rectangle r;
    triangle t;

    ps = &r; //shape pointer points to a rectangle objects
    ps->getdata();
    cout << "\nArea of rectangle is " << ps->area();
    cout << "\nPerimeter of rectangle is " << ps->perimeter();
    ps = &t; //shape pointer points to a triangle object
    ps->getdata();
    cout << "\nArea of triangle is " << ps->area();
    cout << "\nPerimeter of triangle is " << ps->perimeter();

    return 0;
}