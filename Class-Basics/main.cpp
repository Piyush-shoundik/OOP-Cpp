
// simple bank account managment system

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BankAccount{
    private:
    string name; 
    int accoutnumber = 0;
    int balance = 0;

    public:
    void createAccount(){
        cout << "Enter you name" << endl;
        getline(cin,name);
    }
    void deposit(){
        int amount;
        cout << "Enter the amount you want to deposit" << endl ;
        cin >> amount;
        balance = balance + amount;
    }
    void withdraw(){
        int amount;
        cout << "Enter Amount you want to withdraw" << endl;
        cin >> amount;
        balance = balance - amount; 
    }
    void displayAccount(){
        cout << "Welcome Back " << name << endl;
        cout << "Available balance is = " << balance ;
    }


};
 
int main(){
    // int amount = 0;
    BankAccount bankd;
    bankd.createAccount();
    bankd.deposit();
    bankd.withdraw();
    bankd.displayAccount();

}
