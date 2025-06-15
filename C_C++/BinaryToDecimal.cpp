#include <iostream>
using namespace std;




// binary to decimal 
int binaryToDecimal(int a){
  int ans =0, pow = 1;

  while(a>0){
    int rem = a%10;
    ans +=rem*pow;
    a/=10;
    pow *= 2;
  }
  return ans;
}

int main(){
cout << binaryToDecimal(101)<<endl;
return 0;
}