#include <iostream>
using namespace std;

// Function overloading 
/*
function overlading is example of compile time overlading 
and function overloading when we are defining two or more function 
in same class but they have defferent parameter 

*/




class Print {
public:
 void show(int x){
    cout << x << endl;
 }

 void show(char ch ){
    cout << ch << endl;
 }

};

int main (){
Print p1;
p1.show('&');
}