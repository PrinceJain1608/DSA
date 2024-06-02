#include<iostream>
using namespace std;
int main(){
  char num;
  int a;
  int b;
  cout<<"enter number:";
  cin>>num;
  cout<<"enter a:";
  cin>>a;
  cout<<"enter b:";
  cin>>b;
  switch(num){
  case '+':
    cout<<"addition="<<a+b;
    break;
  case '-':
    cout<<"subtraction="<<a-b;
    break;
  case '*':
    cout<<"multiplication="<<a*b;
    break;
  case '/':
    cout<<"division="<<a/b;
    break;
  case '%':
    cout<<"remainder="<<a%b;
    break;
  default:
  cout<<"invalid case"<<endl;
  break;
  }
}