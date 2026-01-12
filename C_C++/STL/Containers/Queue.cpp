#include <iostream>
#include <queue>
#include <string>
using namespace std;


// C++ Queue
/*
FiFo: First in first out 

queue<data_type> variable name 

Note: The type of the queue (string in our example) cannot be changed after its been declared.

Note: You cannot add elements to the queue at the time of declaration, like you can with vectors:
queue<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
*/

int main(){

queue<string> cars;

// Add elements to the queue
cars.push("Volvo");
cars.push("BMW");
cars.push("Ford");
cars.push("Mazda");

// Acess the front element(first and oldest)
  cout <<"first and oldest: "<< cars.front()<<endl;
// Access the back element (last and newest)
  cout <<"last and newest: "<<cars.back() <<endl;

// Change Front and Back Elements
   // You can also use .front and .back to change the vlaue of the front and back 
    cars.front() = "Tesla";// in place of volve - > Tesla
    cars.back() = "VM" ; // in place of Mazda->VM

    cout << "New outputs: "<<cars.front()<<endl;
    cout << "New Outputs of back: "<<cars.back()<<endl;

// Remove elements 
cars.pop(); // remove last elements Volvo;

cout << cars.front();
return 0;
}