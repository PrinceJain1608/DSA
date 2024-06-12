#include<iostream>
using namespace std;
void print(int *arr){
  cout<<arr<<endl;
  cout<<*arr<<endl;
}
void update(int *arr){
  //arr=arr+1;
  //cout<<arr<<endl;
  *arr=*arr+1;
  
}

void sum(int *arr,int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=i[arr];
  }
  cout<<"sum:"<<sum<<endl;
}
int main(){
  int arr[5]={1,2,3,4,5};
  int value=5;
  int *p=&value;
  print(p);
  cout<<"before update:"<<p<<endl;
  cout<<"before update:"<<*p<<endl;
  update(p);
  cout<<"after update:"<<p<<endl;
  cout<<"after update:"<<*p<<endl;
  sum(arr,5);
}