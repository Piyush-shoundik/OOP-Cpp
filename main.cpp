
//using copy constructor 

#include <iostream> 
#include <vector> 
#include <string>
#include <limits>
using namespace std;

class inn{
    public:

    int a;
    inn(int innput){
        a = innput;
    }
    inn(inn &obj){
        a = obj.a;
    }
    void putdata(){
        cout << "value of a is " << a ; 
    }
};

int main(){
    inn class_inn(5);

    inn class_inn2 = class_inn; 
    class_inn2.a = 20;

    inn class_inn3 = class_inn2;

    class_inn3.putdata();
}