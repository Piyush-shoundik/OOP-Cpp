
//using constructor overloading

#include <iostream> 
#include <vector> 
#include <string>
#include <limits>
using namespace std;

class inn{
    public:

    int a;
    inn(){
      cout << "constructor is called\n" ;
    }
    inn(int innput){
        a = innput;
    }
    inn(inn &obj){
        a = obj.a;
    }
    void putdata(){
        cout << "value of a is " << a << endl ; 
    }
};

int main(){
    inn class_inn;
    inn class_inn2(5);
    class_inn2.putdata();
    inn class_inn3(class_inn2);
    class_inn3.putdata();
   
}