// Starting with inhertance
// using of virtual function

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class a{
    public:
    virtual void print_d(){
        cout << "This is class a" << endl;
    }
    
};

class b:public a{
    public:
    void print_d(){
        cout << "This is class b" << endl;
    }
    
};

class c:public b{
    public:
    void print_d(){
        cout << "This is class c" << endl;
        // b::print_d();
    }
   
};

int main(){
    a *ptr;
    a aa;
    ptr = &aa;
    ptr -> print_d();

}