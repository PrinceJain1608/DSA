#include<iostream>
using namespace std;
int main(){
  int count=0;
  int i=1;
  int n;
  cout<<"enter number:";
  cin>>n;
  while(i<=n){
    if(n%i==0){
      count++;
    }
    i++;
  }
  if(count==2){
    cout<<"prime number";
  }
  else{
    cout<<"not prime";
  }
}