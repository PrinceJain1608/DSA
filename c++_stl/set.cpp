#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int> s;
  s.insert(1);
  s.insert(1);
  s.insert(5);
  s.insert(2);
  s.insert(2);
  s.insert(9);
  for(int i:s){
    cout<<i<<" ";
  }cout<<endl;
  //erase(range),count(number)//number is present or not
  set<int>:: iterator it=s.begin();
  it++;
  s.erase(it);
  for(int i:s){
  cout<<i<<" ";
  }cout<<endl;
}