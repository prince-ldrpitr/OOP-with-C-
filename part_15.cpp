// multiple inheritance
// inheritance
#include<iostream>
#include<string>
using namespace std;
class student{
    public :
    string name;
    int rollno;
    };
    class teacher {
        public :
        string subject;
        double salary;
       };
class ta : public student,public teacher{

};

int main(){
    ta t1;
    t1.name="prince";
    t1.subject = "engneering";    
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    return 0;
}