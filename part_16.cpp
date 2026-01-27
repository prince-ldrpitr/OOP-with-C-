// polymorphism with constructor overloading
#include<iostream>
#include<string>
using namespace std;
class student{
    public :
    string name;
    student(){
        cout<<"I AM A NON PERAMETERIZED CONSTRUCTOR";
    }
    student(string name){
        cout<<"I AM A PERAMETERIZED CONSTRUCTOR"<<endl<<name;
    }
};
int main(){
    student s1("prince");
    return 0;
}