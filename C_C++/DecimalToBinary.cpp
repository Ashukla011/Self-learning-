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

int main(){
    for ( int i =0;i<10;i++){
    cout << deciBinary(i)<< endl;
 }
return 0;
}