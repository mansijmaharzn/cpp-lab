// Binary I/O example
#include<iostream>
#include<fstream>
using namespace std;

class Person {
    public:
        int id, age;
        
        Person() {}
        Person(int i, int j) {
            id = i;
            age = j;
        }
};

int main() {
    int id, age;
    cout << "Enter id and age to insert: ";
    cin >> id >> age;

    Person p1(id, age);

    ofstream output("person.dat", ios::binary);
    output.write((char*)&p1, sizeof(Person)); // pointer to data of type char -> (char*)&obj
    output.close();

    Person p2;
    ifstream input("person.dat", ios::binary);
    if (input) {
        input.read((char*)&p2, sizeof(Person));
        cout << "Id: " << p2.id << endl;
        cout << "Age: " << p2.age << endl;
    }
    input.close();

    return 0;
}
