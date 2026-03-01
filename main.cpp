
//using default constructor 

#include <iostream> 
#include <vector> 
#include <string>
#include <limits>
using namespace std;

class printt{
    private:
    int a;

    public:
    printt(){
        a = 0;
        a += 1;
        cout << "Value of a is " << a ; 
    }
};

int main(){
    printt getdata;
    printt get2data;
}