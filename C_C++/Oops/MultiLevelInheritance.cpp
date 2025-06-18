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
class Person{
public:
    string name;
    int age;

};

class Student : public Person{
    public :
    int rollno;
};

class GradStudent : public Student{
    public:
    string researchArea;
};



int main()
{
GradStudent g1;
g1.name = "tony stark ";
g1.researchArea = " quantum physics";
cout << g1.name<<endl;
cout << g1.researchArea<<endl;
    
}