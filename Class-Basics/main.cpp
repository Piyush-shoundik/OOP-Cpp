
// using static data function also static data member

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BankAccount{
    private:
    int a; 
    int b;
    static int c;

    public:

    // void getvalue(){
    //     cout << "Enter value for 1 and 2" << endl;
    //     cin >> a >> b ;
    // }

    void getdata(){
        cout << "Enter your number you want to modify" << endl ;
        cin >> a ;
        c = a;
    }
    static void sum(){
        cout << "current value of c is " << c ;
        c = c + 1;
    }
    void outvalue(){
        cout << "\nCurrent value of a and c are respectively " << a << " " << c ;
    }
};

int BankAccount::c;
 
int main(){
    BankAccount Bankd;
    Bankd.getdata();
    BankAccount::sum();
    Bankd.outvalue();
}
