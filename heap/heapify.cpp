#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
  int largest=i;
  int left=2*i;
  int right=2*i+1;
  if(left<=n && arr[largest]<arr[left]){   // 0 based indexing-> (left<n) || 1 based indexing-> (left<=n)
    largest=left;
  }
  if(right<=n && arr[largest]<arr[right]){
    largest=right;
  }
  if(largest!=i){
    swap(arr[largest],arr[i]);
    heapify(arr,n,largest);
  }
}
void printHeap(int arr[],int n){
  for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}
int main(){
  int arr[6]={-1,54,53,55,52,50};
  int n=5;
  for(int i=n/2;i>0;i--){
    heapify(arr,n,i);
  }
  printHeap(arr,n);
}