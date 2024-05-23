#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"enter charcter:";
  cin>>ch;
  if(ch>='a' && ch<='z'){
    cout<<"lowercase character";
  }
  else if(ch>='A' && ch<='Z'){
  cout<<"uppercase character";
  }
  else if(ch>='0' && ch<='9'){
    cout<<"digit";
  }
  else{
    cout<<"special symbol";
  }

}