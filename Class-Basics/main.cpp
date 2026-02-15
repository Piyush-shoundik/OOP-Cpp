// lets create a class and object

#include <iostream>
#include <string>
using namespace std;

class print{
    private:
    string name;
    int classroom;

    public:
    void getinput(){
        cout << "Enter your name here \n";
        cin >> name ;

        cout << "Enter your classroom here \n";
        cin >> classroom;
    }

    void print_command(){
        cout << "Name is " << name << endl;
        cout << "Classroom is " << classroom << endl;
    }
};
 
int main(){
    print classprint[3];

    for(int i = 0; i < 3; i++){
        classprint[i].getinput();
        classprint[i].print_command();
    }

}
