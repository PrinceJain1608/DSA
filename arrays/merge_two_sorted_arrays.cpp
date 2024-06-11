#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
  int i=0,j=0,k=0;
  while(i<n && j<m){
    if(arr1[i]<arr2[j]){
      arr3[k]=arr1[i];
      k++;
      i++;
    }
    else{
      arr3[k]=arr2[j];
      k++;
      j++;
    }
  }
  while(i<n){
    arr3[k]=arr1[i];
    k++;
    i++;
  }
  while(j<m){
    arr3[k]=arr2[j];
    k++;
    j++;
  }
}
void printarray(int arr3[],int n){
  for(int i=0;i<n;i++){
    cout<<arr3[i]<<" ";
  }cout<<endl;
}
int main(){
  int arr1[6]={3,5,7,9,11,13};
  int arr2[3]={2,4,6};
  int arr3[9]={0};
  merge(arr1,6,arr2,3,arr3);
  printarray(arr3,9);
}