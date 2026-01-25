// other example of inheritancde
#include<iostream>
#include<string>
using namespace std;
class animal{
    public :
    void eat(){
        cout<<"animal is a eating"<<endl;
    }
};
class dog : public animal{
    public :
    void bark(){
        cout<<"dog is a barking"<<endl;
    }
};
int main(){
    dog d;
    d.eat();
    d.bark();
    return 0;
}