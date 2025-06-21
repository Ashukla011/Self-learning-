#include <iostream>
using namespace std;

// SHALOW COPY AND DEEP COMPY 
/*
SHALLOW:
A "shallow" copy of an object copies all of the member vlaue from one object to anothe

DEEP COPY:
A "Deep copy" , on the other hand, not only copies the member values but also makes copies of 
any dynamically allocated memory that the members point to.
*/

class Student {
    public:
  string name ;
  double *cgpaPtr ;
  Student(string name , double cgpa){
    this->name = name ;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
  }
  Student(Student &obj){
    this->name = obj.name;
    cgpaPtr = new double;
    *cgpaPtr = *obj.cgpaPtr;
  }

  void  getInfo(){
    cout << "name : "<< name << endl;
    cout << "cgpa :" << *cgpaPtr << endl;

  }
};

int main(){
// studnet 
Student s1 ("Rahul Kumar" , 8);
Student s2(s1); // 
s1.getInfo();

  s2.name= "Neha";
* (s2.cgpaPtr) = 9.2;
s2.getInfo();
}