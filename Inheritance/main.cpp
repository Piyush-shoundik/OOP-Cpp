// Starting with inhertance
// Hierarchical inheritance 

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

class b:public a{
    public:
    int y;

    // b(){
    //     cout << "Give input for second";
    //     cin >> y;
    // }

    void input(){
        cout << "value of x in class b " <<  x << endl;
    }
};

class c:public a{
    public:
    int z;
    
    
    // void plus(){
    //     z = x + y;
    // }
    
    void display(){
        cout << "value of x in class c " << x << endl;
    }
};

int main(){
    b bb; c cc;
    bb.input();
    // cc.plus();
    cc.display();
}