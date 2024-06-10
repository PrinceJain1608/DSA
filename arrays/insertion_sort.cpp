#include<iostream>
using namespace std;
void insertionSort(int n,int arr[]){
   for(int i=1;i<n;i++){
       int key=arr[i];
       int j=i-1;
       while(j>=0 && key<=arr[j]){
           arr[j+1]=arr[j];
           j=j-1;
        arr[j+1]=key;  
       }
   }
}
void printarray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[5]={4,3,2,1,7};
  insertionSort(5,arr);
  printarray(arr,5);
}