#include<iostream>
using namespace std;
void printarray(int a[],int n){
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}
int main(){
  int a[5]={234,233,54,22,1};
  printarray(a,5);
}