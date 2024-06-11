#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<string> s;
  s.push("prince");
  s.push("jain");
  cout<<s.top()<<endl;
  s.pop();
  //size,empty
}