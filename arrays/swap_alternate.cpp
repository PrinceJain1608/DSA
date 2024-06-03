#include<iostream>
using namespace std;
int swapalternate(int arr[],int n){
  for(int i=0;i<n;i++){
    int start=0;
    int end=n-1;
    while(start<=end){
      swap(arr[start],arr[start+1]);
      start=start+2;;
    }
  }
}
void printarray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[6]={88,55,69,12,1,2};
  swapalternate(arr,6);
  printarray(arr,6);
}