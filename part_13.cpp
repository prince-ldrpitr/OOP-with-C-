//custom constructor with inheritance
// inheritance
#include<iostream>
#include<string>
using namespace std;
class person{
    public :
    string name;
    int age;
    person(string name,int age){
        this->name=name;
        this->age=age;
    }
};
    class student : public person{
        public :
        int roll_no;
        student (string name,int age,int roll_no) : person(name,age){
            this->roll_no=roll_no;
        }
        void getinfo(){
            cout<<"name :"<<name<<endl;
            cout<<"age :"<<age<<endl;
            cout<<"roll_no :"<<roll_no<<endl;
        }
    };

int main(){
    student s1 = {"prince",18,30033};
    s1.getinfo();
    return 0;
}