#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return true;
    }
  }
  return false;
}
int main(){
  int arr[5]={55,22,33,78,1};
  int key;
  cout<<"enter key you want to find:";
  cin>>key;
  int x=linearsearch(arr,5,key);
  if(x){
    cout<<"key found";
  }
  else{
    cout<<"key not found";
  }
}