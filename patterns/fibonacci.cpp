#include<iostream>
using namespace std;
int main(){
  int a=0;
  int b=1;
  int c=0;
  int n;
  cout<<"enter number:";
  cin>>n;
  while(c<=n){
    cout<<c<<" ";
    a=b;
    b=c;
    c=a+b;
  }
}