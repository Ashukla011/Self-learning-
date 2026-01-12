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
  // Destructor 
   ~Student(){
    cout << "Hi, I delete everythings \n";
   delete cgpaPtr; 
//    if we not do this then issue
// it could we couse memory leak 

   }
};

int main(){
// studnet 
Student s1 ("Rahul Kumar" , 8);
 
s1.getInfo();

 
}