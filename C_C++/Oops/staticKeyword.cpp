#include <iostream>
using namespace std;


// Static keyword
/*
. STATIC VARIABLES
Variable declared as static in a funciton are created & initialised once for the lifetime of the program.// in funciton 

static variable in class are creataed * initialised once . They are shared by all the objects of the class // in calss 

. STATIC OBJECTS 

*/

void  fun(){
 int x =0;
 cout << x <<endl;
 x++;
}
int main (){
fun();
fun();
fun();
}