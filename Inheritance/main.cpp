// Starting with inhertance
// Multilevel inheritance 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class a{
    public:
    int x;
    a(){
        x = 10;
    }
};

class b:public a {
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

class c:public b{
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