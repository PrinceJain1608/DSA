#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"enter value of a:";
  cin>>a;
  if(a>0){
    cout<<a<<" is positive number";
  }
  else if(a<0){
    cout<<a<<" is negative number";
  }
  else{
    cout<<a<<" is zero";
  }
}