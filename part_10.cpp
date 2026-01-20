// other example of constructor and difalut copy constructor
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    float spi;
    student(string name,float spi){
        this->name=name;
        this->spi=spi;
    }
    void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"spi :"<<spi<<endl;
    }
};

int main(){
    student s1("prince",8.54);
    s1.getinfo();
    cout<<endl;
   student s2(s1);
   s2.getinfo();
    return 0;
}