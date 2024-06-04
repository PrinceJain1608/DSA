#include<iostream>
using namespace std;
void printarray(int a[],int n){
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}
void sort01(int a[],int n){
  int start=0;
  int end=n-1;
  while(start<=end){
    while(a[start]==0){
      start++;
    }
    while(a[end]==1){
      end--;
    }
    swap(a[start],a[end]);
    start++;
    end--;
  }
}
int main(){
  int a[7]={0,1,0,1,0,1,0};
  sort01(a,7);
  printarray(a,7);
}