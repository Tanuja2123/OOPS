#include <iostream>
using namespace std;

class student{
    private:
    string name;
    int age, roll_number;
    string grade;
    
    public:
    void setName(string n) { // can add more functionaliy to check for valid names
        if(n.size()==0){
            cout<<"invalid name";
            return ;
        }
        name = n;
    }
    void setage(int a){
        if(age<0 || age>100){
            cout<<"invalid age" <<endl;
            return ;
        }
        age = a;
    }
    void setRollNumber(int r) {
        roll_number = r;
    }
    void setgrade(string s){
        grade = s;
    }
    void getname() {
        cout << "Name: " << name << endl;
    }
    void getage() {
        cout << "Age: " << age << endl;
    }
    void getRollNumber() {
        cout << "Roll Number: " << roll_number << endl;
    }
    string getgrade( int pin) {
        if(pin == 123)
        return grade;
        else {
            cout << "Invalid pin" << endl;
            return "";
        }
    }
};
int main(){

    // student s1;
    // s1.name = "rohit";
    // s1.age= 10;
    // s1.roll_number=21;
    // s1.grade= "A+";
    // cout << "Name: " << s1.name << endl;
    student s1;
    s1.setName("rohit");
    s1.setage(10);
    s1.setRollNumber(21);
    s1.setgrade("A+");
    s1.getname();
    s1.getage();
    s1.getRollNumber();
    s1.getgrade(234); // wrong pin

    student *s= new student;
    (*s).setName("Rohan");
    (*s).setage(20);
    s->setRollNumber(22);
    (*s).setgrade("B+");
    (*s).getname();
    (*s).getage();
    (*s).getRollNumber();
    return 0;

}