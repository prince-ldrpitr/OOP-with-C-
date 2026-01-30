// virtual function
/*
Runtime Polymorphism ke liye virtual function use hota hai.

🔹 Virtual Function ka matlab

Jab base class ka pointer
derived class ke object ko point karta hai
aur hume derived class ka function call karna ho,
tab virtual function zaroori hota hai.
*/
#include <iostream>
using namespace std;

class Animal {
public:
   virtual void sound() {
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
    Animal* a;
    Dog d;
    a = &d;
    a->sound();
}
