#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
  int start=0;
  int end=n-1;
  int mid=start+(end-start)/2;
  while(start<=end){
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]<key){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=start+(end-start)/2;
  }
  return -1;
}
int main(){
  int arr[5]={33,55,25,87,1};
  int index=binarysearch(arr,5,87);
  cout<<"87 is present at index:"<<index;
}