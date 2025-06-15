#include <iostream>
using namespace std;

int main (){
 int arr [] ={1,2,3,4,5};
 cout << arr <<endl; // address
 cout<< *arr <<endl; // 1
 cout << *(arr+1) <<endl; // 2
cout  << *(arr+2) <<endl; // 3
 // Pinter arithmetic 

 int a = 10;
 int *p = &a;
 // p++ or ++p  if it have p = 100 after p++ , it will p = 104; 
  cout << p << endl;
  p++;
  cout<<p<<endl; 

// add / subtract Number 
// ptr + 1 -> 1int 
  p = p+2 ;

  // compare (< , <= , >, >= , ==, !=)
//   if int ptr1 - ptr 2  = no of block of type (int)
int ptr5 ;
int ptr6;

cout << (ptr5< ptr6) << endl;

// difference 
int *ptr3 ;
int *ptr4 = ptr3+2;
cout << ptr4 - ptr3 << endl; // 2




    return 0;
}