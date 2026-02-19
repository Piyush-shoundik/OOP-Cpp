
// performing addition by using static data member

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

    int sum(int a, int b){
        c = a + b;
        return c;
    }
    void outvalue(int c){
        cout << "The total output is " << c ;
    }
};
 
int BankAccount::c = 0;

int main(){
    int a ,b;
    cout << "Enter your value for the a and b";
    cin >> a >> b;

    BankAccount bankd;
    int total = bankd.sum(a , b);
    bankd.outvalue(total);
    
}
