//function overriding without virtual function
/*
1️⃣ Must use inheritance
2️⃣ Function name must be same
3️⃣ Parameters must be same
4️⃣ Return type must be same
5️⃣ Base class function should be virtual (for runtime polymorphism)*/
#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();   // calls Dog's sound()
}
