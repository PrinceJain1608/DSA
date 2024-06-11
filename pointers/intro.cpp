#include<iostream>
using namespace std;
int main(){
  int n=5;
  cout<<n<<endl;
  int *ptr=&n;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;  //*ptr==num

  cout<<sizeof(ptr)<<endl;
  cout<<sizeof(*ptr)<<endl;
  cout<<sizeof(n)<<endl;


  int a=3;
  int b=a;
  cout<< "b before"<<a<<endl;
  b++;
  cout<< "b after"<<a<<endl;

  int *p=&a;
  cout<<*p<<endl;
  cout<<p<<endl;
  (*p)++;
  cout<<p<<endl;
  cout<<*p<<endl;
  cout<<"address before "<<p<<endl;
  p++;
  cout<<"address after"<<p<<endl;

}