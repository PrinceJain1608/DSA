#include<iostream>
using namespace std;
int main(){
  int arr[5]={1,2,3};
  char ch[5]="abcd";
  cout<<arr<<endl;   //prints address
  cout<<ch<<endl;   //prints all content

  char *c=&ch[0];
  cout<<c<<endl;
  cout<<*c<<endl;
  cout<<&c<<endl;

  char temp='z';
  char *chh=&temp;
  cout<<chh<<endl;
}