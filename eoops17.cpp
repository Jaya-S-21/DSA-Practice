//Bank Account Class
#include <iostream>
using namespace std;
class bankaccount{
    int accountnumber;
    float balance;

    public:
    bankaccount (int an, float b){
        accountnumber = an;
        balance = b;
    }

    void deposit(float amount) {
        balance += amount;
    }
    void withdraw(float amount) {
        if (balance >= amount){
            balance -= amount;
        } else {
            cout<<"No sufficient balance for this withdrawal!!\n";
        }
    }
    int getbalance(){
        return balance;
    }
};
int main() {
    bankaccount ba1(123456, 2050);
    ba1.deposit(1000);
    ba1.withdraw(5000);
    cout<<"Current Balance: "<<ba1.getbalance()<<endl;
    return 0;
}