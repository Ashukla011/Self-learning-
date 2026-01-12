#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

/*
List: 
A list is similar to a "Vector" in that it can store multiple element of the sam etype and 
dynamically grow in size

Two major differences between lists and vectors are:abort()

1. You can add and remove element from both the beginning and at the end of a list 
    vectors are generally optimized for adding and removing at the end;

2. Unlike  vectors , a list does not support random access, meaning you can not directly jump to a
   specific index, or access elements by index numbers.abort()

*/
// Create a List 



int main(){
    // list<type> listName.
list <string> cars = {"volvo","BMW","Frod","Mazda"};
list<int> num = {29,34,43,89} ;

// front() , back();
cout << cars.front()<<endl;
cout << num.back()<<endl;

// Add List Elements
/*To add elements to a list, you can use .push_front() to insert an element at the beginning of the list 
 and  .push_back() to add an element at the end;*/
 cars.push_front("Volvo2");
 num.push_front(56);
 cars.push_back("Mazada3");
 num.push_back(89);

 // Remove element
 cars.pop_front();// first elemnt remove from list
 num.pop_back(); // remove last element of number list

 // List Size
 cout <<cars.size()<<endl;

// change the value of first element 
num.front() = 100;
cars.front() = "hello";
num.back() = 200;

for(string i : cars){
    cout <<i <<" ";
}

// for (int i = 0; i < cars.size(); i++) {
//   cout << cars[i] << "\n";
// }
return 0;
}