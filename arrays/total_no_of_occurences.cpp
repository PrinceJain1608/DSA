#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int k){
  int start=0;
  int end=n-1;
  int ans=-1;
  int mid=(start+end)/2;
  while(start<=end){
    if(arr[mid]==k){
      ans=mid;
      end=mid-1;
    }
    else if(arr[mid]<k){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=(start+end)/2;
  }
  return ans;
}
int lastocc(int arr[],int n,int k){
  int start=0;
  int end=n-1;
  int ans=-1;
  int mid=(start+end)/2;
  while(start<=end){
    if(arr[mid]==k){
      ans=mid;
      start=mid+1;
    }
    else if(arr[mid]<k){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=(start+end)/2;
  }
  return ans;
}
int main(){
  int arr[5]={1,2,3,3,5};
  int a=firstocc(arr,5,3);
  int b=lastocc(arr,5,3);
  int c=(b-a)+1;
  cout<<"total number of occurences:"<<c;
}