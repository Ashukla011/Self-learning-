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

*/


class Student {
    public :
    string name ;
    int rollno;
};

class Teacher {
    public:
   string  subject;
   double salary;
};

class TA:public Student , public Teacher {
 
};

int main()
{
TA t1;
t1.name = "Tony Stark ";
t1.subject = "CA";

cout << t1.name<<endl;
cout << t1.subject<<endl;
    
}