// constructer
#include<iostream>
#include<string>
using namespace std;
class teacher{
    private :
    int salary;
    public:

    // non-parameterized
    teacher(){
        cout<<"hello! i am a constructer";
    }
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
    teacher t1;
    t1.name="deepali jain";
    t1.subject ="operating system";
    t1.dept_name="information tecnology";
    t1.setsalary(1000000);
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.dept_name<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
}
