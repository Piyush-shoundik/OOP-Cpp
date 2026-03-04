
//using Destructors and constructor at same time 

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
        cout << "constructor a is called" << a << endl;
    }

    ~inn(){
        a--;
        cout << "Destructors a is called " << a << endl ; 
    }

    void putdata(){
        cout << "Program is completed"<< endl ; 
    }
};

int main(){
    inn class_inn,class_inn2,class_inn3; 
    class_inn3.putdata();
}