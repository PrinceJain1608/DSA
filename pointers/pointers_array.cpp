#include<iostream>
using namespace std;
int main(){
  int arr[10]={2,3,4};
  cout<<"1st block address:"<<arr<<endl;
  cout<<"1st block address:"<<&arr[0]<<endl;   //same as above
  cout<<*arr<<endl;
  cout<<&(*arr)<<endl;
  cout<<*(arr+1)<<endl;

  int i=2;
  cout<<i[arr]<<endl;


cout<<sizeof(arr)<<endl;
int *ptr=&arr[0];
cout<<sizeof(ptr)<<endl;
cout<<sizeof(&ptr);

cout<<&arr<<endl;
cout<<&ptr<<endl;


int a[10]={2,4,5};
//a=a+1; error
int *p=&a[0];
cout<<p<<endl;
p=p+1;
cout<<p<<endl;
}