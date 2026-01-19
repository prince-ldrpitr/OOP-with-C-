// constructer with parameterized
#include<iostream>
#include<string>
using namespace std;
class teacher{
    private :
    int salary;
    public:
    teacher(string n,string s,string d,int a){
        name =n;
        subject = s;
        dept_name=d;
        salary =a;

    };
    string name;
    string subject;
    string dept_name;

    // setter  // member functions also call
    void setsalary(int s){
        salary = s;
    }
    //getter
    int getsalary(){
        return salary;
    }
};
int main(){
    teacher t1 = {"deepali jain","operating system","information tecnology",1000000};
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.dept_name<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
}
