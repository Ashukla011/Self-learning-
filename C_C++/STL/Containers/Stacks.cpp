#include <iostream>
#include <stack>
#include <string>
using namespace std;


// C++ Stack
/*
A stack stores multiple elements in a specific order, call LIFO;
LIFO: Last in , First Out 

stack<string> cars;

Note: The type of the stack (string in our example) cannot be changed after its been declared.

Note: You cannot add elements to the stack at the time of declaration, like you can with vectors:
*/

int main(){

// stack<string> cars = {"Volvo", "BMW", "Ford", "Mazda"}; // Give Error because you can not add elements to the stack at the time of declaration , like you can with vectors:
stack <string> cars ;

// Add elements to the stack 
cars.push("Volvo");
cars.push("BMW");
cars.push("Ford");
cars.push("Mazda");

// Access Stack Elements
   // Access the top element
   cout << cars.top()<<endl; // Mazda

// Change the vlaue of the top element
cars.top() = "Tesla";
  // Access the top element
cout << cars.top()<<endl;

// Remove Elements
// This will remove the last element tha twas added to the stack:
  //Remove the last added element (Tesla)
    cars.pop();

    cout << cars.top()<<endl;// Ford

// To find out how many elements a stak has 
 // Size();
  cout <<cars.size();
  cout << cars.empty()<<endl;// 0
return 0;
}