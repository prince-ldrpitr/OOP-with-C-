// functions with objects
#include <iostream>
#include<string>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void display() {   // member function
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;   // object creation
    s1.roll = 30033;
    s1.name = "Prince";

    s1.display(); // function call using object
}
