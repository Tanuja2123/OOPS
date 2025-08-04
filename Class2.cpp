#include <iostream>
using namespace std;

class customer{
    string name;
    int account_number;
    int balance;
    public:
    //parameterized constructor
    customer(){} // default needed when parameterized constructor is present
    // constructer overloading
    customer(string n, int acc_num, int bal) : name(n), account_number(acc_num), balance(bal) {
        cout << "Customer created: " << name << ", Account Number: " << account_number << ", Balance: " << balance << endl;

    }
    //using same name
    customer(string name){
        this->name=name;
        cout << "Customer created with name: " << name << endl;
    }
    //inline constructor
    // take resorces in advance: give error in starting like files, if file can open give error in start
    // if dynamic constructor in not present gives error in starting
    //COPY CONSTRUCTOR -define default doesnt exist now
    customer(const customer &c) {
        name = c.name;
        account_number = c.account_number;
        balance = c.balance;
        cout << "Copy constructor called for: " << name << endl;
    }
    // defining own copy needed ::::
//     ➤ Why would you define your own?
// When your class uses dynamic memory (like pointers), and you need to do a deep copy instead of shallow copy.
    

};
int main(){
    customer c1;
    customer c2("rohit", 10, 11);
    customer c3(customer &c1); // copy constructor needs to be passed by reference = they are the same thing now
    // for default definition of the constructor:: customer c4(c3); good to go
    // assgiment operator
}