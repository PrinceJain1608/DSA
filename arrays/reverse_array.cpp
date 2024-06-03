#include<iostream>
using namespace std;
int reversearray(int arr[],int n){
  for(int i=0;i<n;i++){
    int start=0;
    int end=n-1;
    while(start<=end){
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
  }
}
void printarray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[5]={88,55,69,12,1};
  reversearray(arr,5);
  printarray(arr,5);
}