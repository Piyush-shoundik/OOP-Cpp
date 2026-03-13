// Starting with inhertance
// method overriding

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class a{
    public:
    // int x;
    void input(){
        cout << "This is parent class " << endl;
    }
    
};

class b:public a{
    public:
    // int y;

    // b(){
    //     cout << "Give input for second";
    //     cin >> y;
    // }

    void input(){
        cout << "This is child class " << endl;
    }
};

// class c:public a{
//     public:
//     int z;
    
    
//     // void plus(){
//     //     z = x + y;
//     // }
    
//     void display(){
//         cout << "value of x in class c " << x << endl;
//     }
// };

int main(){
    b bb;
    bb.input();
    bb.a::input(); //this is to call function of parent class
    // cc.plus();
    // cc.display();
}