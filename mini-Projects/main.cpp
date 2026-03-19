// Create a console-based Library Management System using C++ and OOP concepts.

// Requirements:

// 1. Create a base class called "Item"
//    - Private data members:
//      - itemID
//      - title
//    - Public functions:
//      - setDetails()
//      - displayDetails()
//    - Use encapsulation properly (no direct access to variables)

// 2. Create two derived classes:
//    - Book
//        - additional member: author
//    - Magazine
//        - additional member: issueNumber

// 3. Use inheritance so that Book and Magazine reuse Item properties.

// 4. Add constructors:
//    - Default constructor
//    - Parameterized constructor
//    - Show constructor calls using output

// 5. Add destructor:
//    - Print a message when object is destroyed

// 6. Use polymorphism:
//    - Create a virtual function displayDetails() in base class
//    - Override it in derived classes

// 7. Store multiple items:
//    - Use an array of pointers (Item*)
//    - Store both Book and Magazine objects in same array

// 8. Menu-driven program:
//    - 1. Add Book
//    - 2. Add Magazine
//    - 3. Display All Items
//    - 4. Exit

// 9. Operator Overloading:
//    - Overload == operator to compare two items based on itemID

// 10. Additional Challenge (Optional but recommended):
//    - Count total number of items using static variable
//    - Prevent duplicate itemID

// Rules:
// - Do not use global variables
// - Use proper class structure
// - Follow OOP principles strictly
// - Keep code modular and clean

#include <iostream>
#include <string>
using namespace std;

class Item{
    protected:
    int itemID;
    string title;

    public:
    void setDetails(){
        cout << "Enter Item id " ;
        cin >> itemID;

        cout << "Enter Item title ";
        cin >> title;

    }
    virtual void displayDetails(){
        cout << itemID << " is the Item id" << endl ;
        cout << title << " is the title name" << endl;
    }
    Item(){
        cout << "Object is created" << endl;
    }
    virtual ~Item(){
        cout << "Object Destructor called " << endl;
    }
};

class Book:public Item{
    protected:
    string author;
    // string book;

    public:
    Book(){
        cout << "Enter author name " ;
        cin >> author;
    }

    void displayDetails() override {
        Item::displayDetails();
        cout << author << " is the author name" << endl;
    }

};

class Magazine:public Item{
    protected:
    int issueNumber;
    // string Magazine_name;

    public:
    void setDetails(){
        Item::setDetails();
        cout << "Enter issueNumber " ;
        cin >> issueNumber;
        cout << "\n" ;
    }

    void displayDetails() override {
        Item::displayDetails();
        cout << issueNumber  << " is the issueNumber" << endl;
        cout << "\n" ;
    }


};

int totalclass(){
        int t;
        cout << "Enter Total Object " ;
        cin >> t;
        return t;
    }

int main(){

    int n = totalclass();
    Magazine mm[n];

    for(int i = 0; i < n ; i++){
        mm[i].setDetails();
    }
    for(int i = 0; i < n ; i++){
        mm[i].displayDetails();
    }

}

