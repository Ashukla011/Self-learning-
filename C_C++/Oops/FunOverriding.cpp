#include <iostream>
#include <string>
using namespace std;

// Function overriding or Run Time Polymorphism 
/*
parent 7\& Child both contain the same function with different 
implementation the parent class function is said to be overridden

*/




class Parent {
public:
 void  getInfo(){
    cout <<"parent class \n";
 }

 // vertual function
 /*
 . virtual functions are Dynamic in nature.abort()
 . Defined by the keyword "virtual" inside a base class and are always declared with a base
   class and overridden in a child class
.  A virtual function is called during Runtime

 */
 virtual void hello(){
    cout << "Hello from par \n";
 }
};

class Child : public Parent {
    public:
   void  getInfo(){
        cout << "Child class \n";
    }
 void hello(){
    cout << "Hello from child \n";
 }
};

 

int main (){
// Parent p1;
// p1.getInfo();

// Child c1;
// c1.getInfo();

// when both the class have same function then other one is overrid

// virtual calling 
Child c1;
c1.hello();// hello form child 
return 0;
}