// Starting with inhertance
// single inheritance 

#include <iostream>
using namespace std;

class a{

    protected:
    int x = 10;
};

class b:private a{
    public:
    int y = 10;

    void display(){
        cout << "total is " << x + y ;
    }
};

int main(){
    b aa;
    aa.display();
}