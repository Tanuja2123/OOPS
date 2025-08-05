#include <iostream>
using namespace std;
class customer{
    string name;
    int account_number, balance;
    public:
    static int total_customers;
    static int tot_balance;
    static void distotal(){ // static method can access only static variables
        cout<<total_customers;
    }
    customer(string name, int acc_num, int bal) : name(name), account_number(acc_num), balance(bal) {
        cout << "Customer created: " << name << ", Account Number: " << account_number << ", Balance: " << balance << endl;
        total_customers++;
        cout<<"total customer "<< total_customers<<endl;
    }
    void deposit(int val){
        if(val >0){
            tot_balance+= val;
        }  else{
            cout<<"invalid account"; // also check positive age or greater than certain threshold
        }
    }
};
int customer::total_customers=0;
int customer::tot_balance=0;
int main(){
    // abstraction cares about this
    customer a1("rohit", 1, 1000);
    a1.tot_balance += -10; // -10 added without checkpoint
    a1.deposit(-10);
    return 0;
}
//DATA HIDING: no direct access to the data LIKE age >120 ,, not possible return message invalid age.
//no direct access to the data.
