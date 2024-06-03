#include<iostream>
using namespace std;
int sum=0;
int sumarray(int a[],int n){
  for(int i=0;i<n;i++){ 
    sum=sum+a[i];
  }
  return sum;
}
int main(){
  int a[5]={55,22,33,78,1};
 int x= sumarray(a,5);
 cout<<"sum="<<x;
 }