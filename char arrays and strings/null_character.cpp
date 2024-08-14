#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
  char name[10];
  cout<<"enter your name:";
  cin>>name;
  cout<<"your name is "<<name;  //prince
cout<<endl;
  char surname[5];
  cout<<"enter your surname:";
  cin>>surname;
  surname[2]='\0';  //null charcter denotes the end of the string
  cout<<"your surname is "<<surname;  //ja
}