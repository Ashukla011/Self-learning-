#include <iostream>
using namespace std;

int main(){
// Bitwise Operators

// Bitwise & : 
/*
 0&0 = 0 ;
 0&1 = 0 ;
 1&0 = 0 ; 
 1&1 = 1;
*/
 int a =4, b=8;
 cout<< (a&b)<<endl;

// Bitwiese |(OR):
/*
 0|0 = 0;
 0|1 = 1;
 1|0 = 1;
 1|1 = 1;

 4|8 = 0100 | 1000 = 1100 =>(12) base of 10;
*/
cout << (a|b) << endl;

// Bitwiese ^ (XOR) 
// Rule: same -> 0 , different ->1
/*
 0^0 = 0;
 1^1 = 0;
 1^0 = 1;
 0^1 = 1;
*/

/*
 4^8 = > 100 ^ 1000 => 1100 (12) base of 10
 3^7 = > 011 ^ 111 =>  100 = >(4) base 10
*/
cout << (a^b) << endl;

// BITWISE LEFT SIFT OPERATOR >> 
/*
N = 4 -> 100 , N<<1 , 100_ => FINLA 1000 IN PLACE OF _ THERE WILL BE A ZERO
n= 10 -> 1010 , N<<2, _ _ _ _ BUT DUE TO TO SHIFT _ _ _ _ _ _ SO 101000 
*/
 cout << (10<<2) << endl;

// BITWISE RIGHT OPERATOR >> 
/*
 10 >> 1  = > 1010 -> right 0 _ 1_ 0_ 1_  - > finaly  -> 101 = (5)
 4>> 1  => 100 -> right 0 _ 1_ 0_  - > finaly -> 10  = (2)
*/
cout << (10>>1) << endl;
cout << (4>> 1 ) << endl;

// if any number a<<b = > asn = a*2^b  , 8<<1  = > 8*2^1 => 16;
// if any number a>> b => ans = a/2^b , 8>> 1 => 8/2^1 => 4;

/* OPERATOR PRECENDENCE : MEANS IN TURM OF PRIORITY WITCH ONE PERFORM FIRST  */
// ! , + - (UNARY OPERATORS) 
// *, / , %
// < , <= , >= , > 
// == , != 
// "" 
// || 

return 0;
}