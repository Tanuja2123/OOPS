#include <iostream>
using namespace std;

class customer{
    string name;
    int account_number, balance;
    public:
    static int total_customers;
    static void distotal(){ // static method can access only static variables
        cout<<total_customers;
    }
    customer(string name, int acc_num, int bal) : name(name), account_number(acc_num), balance(bal) {
        cout << "Customer created: " << name << ", Account Number: " << account_number << ", Balance: " << balance << endl;
        total_customers++;
        cout<<"total customer "<< total_customers<<endl;
    }
};
int customer::total_customers = 0;
int main(){
    customer a1("rohit", 1, 1000);
    customer a2("mohit", 2, 1000);
    customer::total_customers=5; // static can be accessed;
    a1.distotal(); //method can be accessed by the object
}

// 🔹 1. Const Member Variables
// Declared using const inside a class.

// Must be initialized using the constructor initializer list.

// Cannot be modified after initialization.

// cpp
// Copy
// Edit
// class A {
//     const int x;
// public:
//     A(int val) : x(val) {}
// };
// 🔹 2. Const Member Functions
// Defined with const after the function signature.

// Cannot modify any member variables of the class.

// Only const functions can be called by const objects.

// cpp
// Copy
// Edit
// class A {
//     int x;
// public:
//     int getX() const { return x; } // const function
// };
// 🔹 3. Const Objects
// Declared as const to prevent modification.

// Can only call const member functions.

// Cannot call non-const functions.

// cpp
// Copy
// Edit
// const A obj;
// obj.getX();  // ✅ Allowed
// obj.setX(5); // ❌ Error
