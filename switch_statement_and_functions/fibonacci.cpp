#include<iostream>
using namespace std;
int fib(int n){
  int a=0;
  int b=1;
  int c=0;
  while(c<=n){
    cout<<c<<" "<<endl;
    a=b;
    b=c;
    c=a+b;
  }
}
int main(){
  int n;
  cout<<"enter number:";
  cin>>n;
  fib(n);
}