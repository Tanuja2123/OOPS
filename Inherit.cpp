#include <iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;
    public:
    void work(){
        cout<<"I am working\n";
    }
    Human(){
        
    }
    Human(string n, int a) {
        name = n; // Accessing protected member
        age = a;  // Accessing protected member
    }
    ~Human() {
        cout<<"Destructor called for Human\n";
    }
};

class Student : public Human {
    int roll_number, fees;
    public:
    void study(){
        cout<<"I am studying\n";
        
    }
    Student(string n, int a, int r, int f) {
            name = n; // Accessing protected member from base class
            age = a;  // Accessing protected member from base class
            roll_number = r;
            fees = f;
    }
    Student(){
        cout<<"hello student\n";
    }
    ~Student() {
        cout<<"Destructor called for Student\n";
    }
    void display(){
        cout << "Name: " << name << ", Age: " << age 
             << ", Roll Number: " << roll_number 
             << ", Fees: " << fees << endl;
    }
};
//public can be directly accessed
int main(){
    Student a1("rohit", 20, 101, 5000);
    a1.work(); // Accessing public method from base class
// constructor : parent->child
//destrucotr: child->parent (opposite)
// display can also be accessed 
    a1.display();
}