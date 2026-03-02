
//using Destructors 

#include <iostream> 
#include <vector> 
#include <string>
#include <limits>
using namespace std;

int a = 0;
class inn{

    public:
    inn(){
        a++;
        cout << "constructor is called " << a << endl;
    }

    ~inn(){
        a--;
        cout << "Destructors is called " << a << endl ; 
    }

    void putdata(){
        cout << "value of a is " << a << endl ; 
    }
};

int main(){
    inn class_inn,class_inn2,class_inn3;
}