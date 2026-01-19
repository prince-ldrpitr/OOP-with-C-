// this pointer
#include<iostream>
#include<string>
using namespace std;
class teacher{
    private :
    int salary;
    public:
    teacher(string name,string subject,string dept_name,int salary){
        this->name =name;
        this->subject = subject;
        this->dept_name=dept_name;
        this->salary =salary;

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
