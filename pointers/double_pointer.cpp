#include<iostream>
using namespace std;
void update(int **p){
 // p=p+1;  same becaus pass by value
 //*p=*p+1;  will change
 **p=**p+1;
}

int main(){
  int i=5;
  int *p1=&i;
  int **p2=&p1;
  cout<<p1<<endl;
  cout<<&p1<<endl;

  cout<<i<<endl;   //5
  cout<<*p1<<endl;  //5
  cout<<**p2<<endl;  //5

  cout<<&i<<endl;
  cout<<p1<<endl;
  cout<<*p2<<endl;
  cout<<endl<<endl;

  cout<<"befoe updating"<<endl;
  cout<<i<<endl;
  cout<<p1<<endl;
  cout<<p2<<endl;
  update(p2);
   cout<<"after updating"<<endl;
  cout<<i<<endl;
  cout<<p1<<endl;
  cout<<p2<<endl;


}