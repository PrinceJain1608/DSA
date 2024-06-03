#include<iostream>
using namespace std;
bool isPrime(int n){
  int count=0;
  for(int i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
  if(count==2){
    return true;
  }
  return false;
}
int main(){
  int n;
  cout<<"enter  number:";
  cin>>n;
  if(isPrime(n)){
    cout<<"prime number";
  }
  else{
    cout<<"not prime number";
  }
}