// Starting with inhertance
// constructor handling in inheritance

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class a{
    public:
    a(int x){
        cout << "This is parent class  " << endl;
        cout << "value of x is "<< x << endl;
    }
    
};

class b:public a{
    public:
    b(int x,int y) : a(x){
        cout << "This is child class 1 " << endl;
        cout << "value of y " << y << endl;
    }
};

class c:public b{
    public:
   c(int x, int y, int z) : b(x,y) {
        cout << "This is child class 2 " << endl;
        cout << "value of z is "<< z << endl;
    }
};

int main(){
    c bb(10,20,30);
    // bb.input();
    // bb.a::input(); //this is to call function of parent class
}