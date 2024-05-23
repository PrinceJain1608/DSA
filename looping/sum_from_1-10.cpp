#include<iostream>
using namespace std;
int main(){
  int sum=0;
  int i=1;
  int n;
  cout<<"enter number:";
  cin>>n;
  while(i<=n){
    sum=sum+i;
    i++;
  }
  cout<<sum;
}