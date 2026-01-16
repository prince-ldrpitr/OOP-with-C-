// encapsulation
#include<iostream>
#include<string>
using namespace std;
class account{
    private:
    int password;
    double balance;
public:
string user_id;
string user_name;
    void setpassword(int p){
        password = p;
    }
    int getpassword(){
        return password;
    }
    void setbalance(double b){
        balance = b;
    }
    double getbalance(){
        return balance;
    }
};
int main(){
    account account1;
    account1.user_id = "24BEIT30033";
    account1.user_name = "Dantani prince pintubhai";
    account1.setpassword(1507); 
    account1.setbalance(10000000.222551);
    cout<<account1.user_id<<endl;
    cout<<account1.user_name<<endl;
    cout<<account1.getpassword()<<endl;
    cout<<account1.getbalance()<<endl;
    return 0;
}