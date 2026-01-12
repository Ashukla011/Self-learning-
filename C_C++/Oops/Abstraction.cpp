/*
// Abstraction 
using Abstract Classes
. Abstract class are used to provide a base class from which other classes can be derived
. They can not be instantiated and are meant to be inherited. 
. Abstract classes are typically used to define an interface for derived classses 

*/

#include <iostream>
using namespace std;

class Shape {
 virtual void draw() =0; // pure virtual function 

};
class Circle : public Shape{
    public:
    void draw(){
        cout << "drawing a cirlce \n";
    }
};
int main (){

    Circle c1;
    c1.draw();
    return 0;
}