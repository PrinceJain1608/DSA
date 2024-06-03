#include<iostream>
using namespace std;
bool even(){
  int a;
  cout<<"enter number:";
  cin>>a;
  if(a%2==0){
    return true;
  }
  return false;
}
int main(){
  if(even()){
    cout<<"even";
  }
  else{
    cout<<"odd";
  }
}