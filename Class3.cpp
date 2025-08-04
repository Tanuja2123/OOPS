#include<iostream>
using namespace std;

class customer{
    string name;
    int *data;
    public:
    customer(string name){
        cout<<"constuctor called\n";
        this->name ="rohit";
        cout<<name<<endl;
        data= new int;
        *data= 10;
    }
    customer(){}
    ~customer(){
        delete data;
    }
};
int main(){
    customer c1("rohit"), c2("john"), c3("jain");
    customer *a4=new customer;
    delete a4;

    // constructor are called in order and destructor in reverse order : top-down, bottom-up
//     Constructors are called in order (base → derived → members);Because the derived class may depend on the base class being properly initialized first.

// Destructors are called in reverse order (members → derived → base);Because the derived class resources should be cleaned up before the base class is destroyed.

// | Lifecycle Phase | Order                    | Reason                                |
// | --------------- | ------------------------ | ------------------------------------- |
// | Constructors    | Base → Members → Derived | Each layer builds on the previous one |
// | Destructors     | Derived → Members → Base | Tear down in safe reverse order       |
        // DEPENDENCY
    return 0;
}