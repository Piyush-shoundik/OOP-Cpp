//Getting started with polymorphism
//operator overloading without constructor 

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
    void operator++(int){
        a = a + 1;
    }
    void operator++(){
        a = a + 1;
    }
};

int main(){
    add aa;
    aa.getinput();
    ++aa;
    aa++;
    aa.putinput();
}