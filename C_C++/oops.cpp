#include <iostream>
#include <string>
using namespace std;
// Object : object are entities in the real world 
// calss : class is like a blueprint of these entities

/*
Teacher : name , dept , subject , salry, ChangeDept()  -> there are called properity 
Teacher is a OBJECT or ENTITY
ChangeDept(): is method of object ; 
class Teacher {
 
public:
string name;  - properity 

void desplayName(){ - method 
 cout << name<< endl;
}
}
*/

// Access Modifiers
/*
Private : Data & methods accessible inside class by defaut everything is private 

Public : data & methods accessible to everyone 

protected : data & methods accessible inside class & to its

*/
class Teacher{

// properties
private:
double salary;

public:
string name;
string dept;
string subject;

// Non parametrized constructor 

// Teacher(){
//     cout << "Hi , I am constructor \n";
//     dept = "computer Science";
// }

// parametrized constructor : you can create more constructor by type of parameter should be change 

// Teacher(string n , string d , string s , double sal){
//     name = n ;
//     dept = d; 
//     subject =s; 
//     salary = sal ;
// }

Teacher(string name , string dept , string subject , double salary){
    this->name = name ;
    this->dept = dept; 
    this->subject =subject; 
    this->salary = salary ;
}


// method : also called member function 
void ChangeDept (string newDept){
    dept = newDept;

}

// geter and setter function 
void setSalary (double s){
    salary = s;
}

double getSalary(){
    return salary;
}

void getinfo(){
    cout << "name:"<< name<<endl;
    cout << "subject:"<<subject<<endl;
}
};

// Encapsulation , Abstraction , Inheritance , Polymorphism 

// 1 . Encapsulation : 
/*Encapsulation i swrapping up of data & member funcitons 
in a single unite called class , help in data hiding 
*/

class Account {
    private:
    double balance;
    string password;

    public :
    string accountId;
    string username ;
    
};

// Constructor : 1. Non-prametrized constructo , 2. prametrized constructor , 3. copy constructor 
/*
Special mehtod invoked automatically at time of object creation .abort()
Used for Initialisation 
. same name as classs
. Constructor does't have a return type 
. Only called once (automatically ) , at object creation 
. Memory allocation happens when constructor is called 
. this: this is a special pointer in c++ that points to the current object

*/
int main (){
Teacher t1 ("Avnish","computer science", "c++", 8900); // constructor called autometically 
// Teacher t2; // constructor called autometically 
// t1.name = "Shivam Sharma";
// t1.subject ="C++";

// t1.salary = 25000;
t1.setSalary(25000);

cout <<"Hello my name is  " + t1.dept <<endl;
cout << t1.getSalary()<< endl;
 t1.getinfo();
Teacher t2 (t1);// copy constructor
t2.getinfo();
return 0; 
}