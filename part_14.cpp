// multi level inheritance
// inheritance
#include<iostream>
#include<string>
using namespace std;
class person{
    public :
    string name;
    int age;
};
    class student : public person{
        public :
        int roll_no;
    };
    class gredreserach : public student{
    public :
    string areaname;

    };

int main(){
    gredreserach s1;
    s1.name = "prince";
    s1.areaname = "gandhinagar";
    cout<<s1.name<<endl;
    cout<<s1.areaname;
    return 0;
}