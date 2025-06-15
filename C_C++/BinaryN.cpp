#include <iostream>
using namespace std;

// Decimal to binary 
int deciBinary (int a){
    int ans = 0, pow = 1;
    while (a>0)
    {
    int rem = a%2;
     a/=2;
     ans +=(rem*pow);
     pow *= 10;
    }
    return ans;

}

// binary to decimal 


int main (){
// BINARY NUMBER SYSTEM 

// DECIMAL = 10;
// HEXADECIMAL : 16;
// OCTAL : 8 ;
// BINARY : BASE 2

// DECIMAL TO BINARY :
// 42 - REPEATED DIVISION WITH 2 
// 42/2 - REMENDER 0 , ANS 21 
// 21/2 - REMENDER 1 , ANS 10;
// 10/2 - REMENDER 0, ANS  5;
// 5/2 - REMENDER 1 , ANS 2 ;
// 2/2 - REMENDER 0 , ANS 1;
// 1/2 - REMENDER 1 
//  WRITE IT IN BACKWORD SIDE (42)*2: 101010

// 50 : RPEATED DIVSION WITH BASE 2

/* 
50/2 - REMENDER 0 , ANS 25;
25/2 - REMENDER 1 , ANS 12;
12/2 - REMENDER 0 , ANS 6;
6/2 - REMENDER 0  , ANS 3;
3/2 - REMENDER 1 , ANS 1,
1/2 - REMENDER 1, 
(50)*2 : 110010
*/

// CODE 
 for ( int i =0;i<10;i++){
    cout << deciBinary(i)<< endl;
 }
    
 
return 0;
}
