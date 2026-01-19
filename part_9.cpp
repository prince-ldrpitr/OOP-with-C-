#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    // Constructor
    Student(int r) {
        roll = r;
    }

    // Copy Constructor
    Student(Student &s) {
        roll = s.roll;
    }
    void show(){
        cout<<"roll"<<roll<<endl;
    }
    
};

int main() {
    Student s1 = {30033};   // Normal constructor
    Student s2 = s1;  // Copy constructor call
    s1.show();
    s2.show();
    return 0;
}
