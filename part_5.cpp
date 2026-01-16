//Encapsulation + Functions with Objects
#include <iostream>
using namespace std;

class Bank {
private:
    int balance;

public:
    void deposit(int amount) {
        balance = amount;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    Bank b1;
    b1.deposit(5000);
    cout << "Balance: " << b1.getBalance();
}
