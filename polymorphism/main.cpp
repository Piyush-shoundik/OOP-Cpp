//Getting started with polymorphism
// operator overloading without constructor 

#include <iostream>
using namespace std;

class add{
    private:
    int a;
    public:
    void getinput(){
        cout << "Give input for a \n";
        cin >> a;
    }
    void putinput(){
        cout << a << " is the value for this object";
    }
    add operator+(add obj){
        add sum;
        sum.a = a + obj.a;
        return sum;
    }
};

int main(){
    add aa,bb,cc;
    aa.getinput();
    bb.getinput();

    cc = aa + bb ;
    cc.putinput();
}