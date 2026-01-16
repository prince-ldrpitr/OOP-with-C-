//Function to Set and Get Data
#include<iostream>
#include<string>
using namespace std;
class rectengle{
    public:
    int length,breadth;
    void setdata(int l,int b){
        length = l;
        breadth = b;
    }
    int getdata(){
        return length*breadth;
    }
};
int main(){
    rectengle question;
    question.setdata(5,10);
    cout<<"the value of rectengle is :"<<question.getdata();
    return 0;
}