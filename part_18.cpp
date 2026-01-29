// run time polymorphism
#include<iostream>
#include<string>
using namespace std;
class person{
    public :
    void getinfo(){
        cout<<"i am parent";
    }
     virtual void hello() {
        cout<<"i am virtual parent";
    }
};
class child  :public person{
public:
      void getinfo(){
        cout<<"i am child";
      }
      void hello(){
        cout<<"i am a child";
      }
};
int main(){
    child c1;
    c1.hello();
    return 0;
}
