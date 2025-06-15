#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main()
{

  // array stores a collection of data such as ints,doubles, strings etc , this data isoften referred to as the array's elements.

  string cars[4] = {"Volve", "BMW", "Ford", "Mazda"};
  int n = sizeof(cars) / sizeof(cars[0]);
  sort(cars, cars + n);
  for (string car : cars)
  {

    cout << "cars:" + car << endl;
  }

  // DESCENDING ORDER
  sort(cars, cars + n, greater<string>());

  for (string car : cars)
  {
    cout << car << endl;
  }

  // Reverse array element

  reverse(cars, cars + n);
  for (string car : cars)
  {
    cout << car + " ";
  }
  //  cout<<"\n"<<endl;
  // Reverse char of each string

   for(int i = 0 ; i<n; i++){
     reverse (cars[i].begin(), cars[i].end());
   }
   for (string car : cars){
    cout<< car +" ";
   }
  cout << "\n"
       << endl;
  //  Without using reverse function reverse each char

  // for (int i = 0; i < n; i++)
  // {
  //   int left = 0;
  //   int right = cars[i].length() - 1;

  //   while (left < right)
  //   {
  //     char temp = cars[i][left];
  //     cars[i][left] = cars[i][right];
  //     cars[i][right] = temp;

  //     left++;
  //   right--;
  //   }
    
  // }
  // cout<< "reverce without in build function:\n";
  // for (string car : cars)
  // {
  //   cout << car + " ";
  // }

  return 0;
}