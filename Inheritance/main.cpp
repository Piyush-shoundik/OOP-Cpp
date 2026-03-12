// Starting with inhertance
// multiple inheritance 

#include <iostream>
using namespace std;

class a{

    protected:
    int x;
    a(){
        x = 10;
    }

};

class b{
    public:
    int y;

    // b(){
    //     cout << "Give input for second";
    //     cin >> y;
    // }

    void input(){
        cout << "Give input for second number";
        cin >> y ;
    }
};

class c: public a, public b{
    public:
    int z;
    
    // c(){
    //     z = x + y;
    // }
    void plus(){
        z = x + y;
    }
    
    void display(){
        cout << "Total is " << z;
    }
};

int main(){
    c cc;
    cc.input();
    cc.plus();
    cc.display();
}