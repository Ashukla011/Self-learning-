#include <iostream>
#include <string>
using namespace std;

// INHERITANCE
/*
WHEN properties & member functions of base class are passed on to the derived class
      
               Derived class   Derived class   Derived class 
Base class     Private Mode    Protected Mode  Public Mode 
Private        Not Inherited   Not Inherited   Not Inherited 
Protected      Private         Protected       Protedcted 
public         private         protected       public 


*/
// TYPE OF IHERITANCE 
/*
SINGLE LEVEL INHERITANCE 
MULTI LEVEL INHERITANCE 

*/
class Person
{
public:
    string name;
    int age;

    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }
    // firt drive call constructor call
    // in DISTRUCTOR IT WAS APPOSIT CALLING HAPPEND
       Person(){
        cout << "parent constructor .. \n";
       }
};

class Student : public Person
{
public:
    int roll;

    Student(string name, int age, int roll) : Person(string name , int age)
    {
        cout << "drived constructor .. \n";
    }

    void getInfo()
    {
        cout << "roll :" << roll << endl;
        cout << "name :" << name << endl;
        cout << "age: " << age << endl;
    }
};

int main()
{

    Student s1("rahul kumar", 21, 232);
}