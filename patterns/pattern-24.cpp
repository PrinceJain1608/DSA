#include<iostream>
using namespace std;
 int main(){
  int n;
  cout<<"enter number:";
  cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
        cout<<" "<<" ";
    }
      for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
      
      int start=i-1;
      while(start){
        cout<<start<<" ";
        start--;
      }

    
      cout<<endl;
  }
 }