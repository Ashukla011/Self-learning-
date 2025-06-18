#include <iostream>
using namespace std;

// POLYMORPHISM
/*
Polymorphism is the ability of object to take on difference form or behave in differen
ways depending on the context in which they are used

. Compile Time Polymorphism:  ex. constructor overloading 
. Run Time Poylmorphism
*/
// this is called constructo overloading 


class Student
{
public:
    string name;

    Student()
    {
        cout << "non-prameterized \n";
    }
    Student(string name)
    {
        this->name = name;
        cout << "parameterized \n";
    }
};
int main()
{
    Student s1("tony stark");
    return 0;
}