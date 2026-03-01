
//using parametrized constructor 

#include <iostream> 
#include <vector> 
#include <string>
#include <limits>
using namespace std;

class inn{
    private:
    int a;

    public:
    inn(int innput){
        cout << "Value for parameterized constructor " << innput ;
    }
};

int main(){
    inn class_inn(5);
}