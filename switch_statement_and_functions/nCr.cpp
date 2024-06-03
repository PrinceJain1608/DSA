#include<iostream>
using namespace std;
int factorial(int n){
  int fac=1;
  for(int i=1;i<=n;i++){
    fac=fac*i;
  }
  return fac;
}
int nCr(int n,int r){
  int num=factorial(n);
  int deno=factorial(r)*factorial(n-r);
  int ans=num/deno;
  return ans;
}
int main(){
 int x=nCr(8,2);
 cout<<"nCr="<<x;
}