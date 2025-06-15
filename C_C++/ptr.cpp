#include<iostream>
using namespace std;

int main(){
// Memory addresses are in hexdecimal form 
// Pointer store addresses of other variables 

// Address of Operator : & 
 int a = 10;
 int *ptr = &a;
int **ptr2 = &ptr; // store the address of pointer
 cout << ptr << endl;// address of a 
 cout << &ptr <<endl; // address of ptr
 cout << ptr2 << endl; // address of ptr

 // DeReferance operator : value at address 
// means value at addres
// *(&a) // value of a 

cout << *(&a) << endl; // value of a 
cout << *(ptr) << endl; // value of a

cout << * (*(ptr2)) << endl; // value of a 

// Null pointer 
int *b = NULL ;  // )x0 // 
cout << *ptr << endl; // Error : segmentation fault

// problem : 1

int x = 5; 
int *y = &x;
int **q = &y;

cout << *y << endl; // 5
cout << **q << endl; // 5
cout << y << endl; // address of x
cout << *q<<endl; // address of x

return 0;
}