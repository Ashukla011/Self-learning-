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
multiple inheritance : parent - parent - child
Hierarchial Inheritance: perent - child - child 
Hybrid Inheritance:  person - studnet - student+teacher - Ta
*/


class Person {
    public :
    string name ;
    int age;
};

class Student: public Person {
    public:
  int rollno;
};

class Teacher : public Person{
 public:
 string subject ; 
};

int main()
{

    
}