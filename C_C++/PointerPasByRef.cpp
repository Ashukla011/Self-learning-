#include <iostream>
using namespace std;

void ChangeA(int *a){ // pass by reference by 
    *a = 20;

}

 // elias :: both have same name 
int main(){
     int a = 10;
    ChangeA(&a);

   cout <<  a << endl;//20
    return 0;
}