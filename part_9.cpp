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

    
};

int main() {
    Student s1 = {30033};   // Normal constructor
    Student s2 = s1;  // Copy constructor call
    cout<<s1.roll<<endl;
    cout<<s2.roll<<endl;
    return 0;
}
