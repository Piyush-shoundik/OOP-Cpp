//Getting started with polymorphism
//operator overloading shorthand assignment operator (+,+=,-=)

#include <iostream>
using namespace std;

class add{
    private:
    int a;
    public:
    void getinput(){
        cout << "Give input ";
        cin >> a;
    }
    void putinput(){
        cout << a << " is the current value";
    }
    void operator+=(add obj){
        a = obj.a + a ;
    }
};

int main(){
    add aa,bb;
    aa.getinput();
    bb.getinput();
    bb += aa;
    bb.putinput();
}