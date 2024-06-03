#include<iostream>
using namespace std;
int bitsA(int a){
  int count=0;
  while(a!=0){
    if(a&1){
      count++;
    }
    a=a>>1;
  }
  return count;

}
int bitsB(int b){
  int count=0;
  while(b!=0){
    if(b&1){
      count++;
    }
    b=b>>1;
  }
  return count;
}
int main(){
  int a,b;
  cout<<"enter a and b:";
  cin>>a>>b;
  int x=bitsA(a);
  int y=bitsB(b);
  int z=x+y;
  cout<<"total set bits:"<<z;
}