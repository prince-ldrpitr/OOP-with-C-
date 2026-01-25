// inheritance
#include<iostream>
#include<string>
using namespace std;
class person{
    public :
    string name;
    int age;
    person(){
        cout<<"i am a parent constructer"<<endl;
    }
};
    class student : public person{
        public :
        int roll_no;
        student (){
            cout<<"i am a child constructer"<<endl;
        }
        
    };

int main(){
    student s1;
    s1.name = "prince";
    s1.age = 18;
    s1.roll_no = 30033;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll_no<<endl;
    return 0;
}