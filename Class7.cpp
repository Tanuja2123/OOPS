#include <iostream>
using namespace std;

class Human{
    string name;//private
    int age, weight;
    public:
    int pub_var;
};
class Student : public Human {
    int roll_number;
    int fees;
};
 int main(){
    Student a;
    // a.name= "rohit"; not accessible private members
    //protected also not asseble
    a.pub_var = 10; // public member accessible
    // pub methods also accessible
 }