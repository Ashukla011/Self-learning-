#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
vector<int>v = {};
vector<char>c={};
vector<int> v2;
vector<int> v3;
c.push_back('z');
c.push_back('t');
c.push_back('a');
c.push_back('m');

v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(50);

v.pop_back(); // it will remove complete element form vectore 

// Get the first element 
cout <<v.front()<<endl;

// get the last element
cout <<v.back()<<endl;
// get the scond element 
cout <<c.at(1)<<endl;
// check vectore is empty
cout <<c.empty()<<endl;// if empty the print 1 else 0
// ASSIGN(): assign()-> copy contents from one vector to another
v2.assign(v.begin(),v.end()); // all the element are assign to v2 vector now 
v3.assign(2,4); // it assign 2 element in v3 vectore 4 4 

vector<char>::iterator it = c.begin();
cout << "begin:"<<*it<<endl;

// Insert : insert(interator position,size_t amount ,<type>vlaue)
v.insert(v.begin()+2,3,10);

// Sort Ascending
sort(v.begin(), v.end());
sort(c.begin(),c.end());


cout <<"Size:"<<v.size()<<endl;
for(int i = 0;i<c.size();i++){
    cout<<c[i]<<" "; // it will print a m t z
}
cout <<endl;
for(int ch : c){
    cout <<ch <<" "; // it will print ASII value of char
}
cout <<endl;
for(int i : v){
    cout <<i<<" ";
}
cout <<endl;
// Sort Descending
sort(v.begin(), v.end(),greater<int>());
sort(c.begin(),c.end(),greater<char>());
for(int i =0;i<c.size();i++){
    cout <<c[i]<<" ";
}
cout <<endl;
for(int i : v){
    cout <<i<<" ";
}

v.clear();// it print 0 becouse, have not element clear remove all
return 0;
}