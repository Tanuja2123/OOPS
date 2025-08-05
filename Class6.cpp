#include <iostream>
using namespace std;
// acess specifiers: public, protected, private

class Human{
    private: 
    int a;
    protected: 
    int b;
    public:
    int c;
    void fun(){
        { a=10; b=20; c=30;}
    }
};
int main(){
    Human rohit;
    rohit.c=10;
    rohit.fun(); // public or protected
}