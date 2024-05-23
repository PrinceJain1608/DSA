#include<iostream>
using namespace std;
int main(){
  int sum=0;
  int i=0;
  int n;
  cout<<"enter number:";
  cin>>n;
  while(i<=n){
    sum=sum+i;
    i=i+2;
  }
  cout<<sum;
}