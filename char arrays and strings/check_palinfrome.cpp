#include<iostream>
using namespace std;
bool checkPalindrome(char s[],int n){
  int start=0;
  int end=n-1;
  while(start<end){
    if(s[start]!=s[end]){
      return false;
    }
    else{
      start++;
      end--;
    }
  }
  return true;
}
int getLength(char s[]){
  int count=0;
  for(int i=0;s[i]!='\0';i++){
    count++;
  }
  return count;
}
int main(){
  char s[29];
  cout<<"enter string:";
  cin>>s;
  int len=getLength(s);
  cout<<checkPalindrome(s,len);
}