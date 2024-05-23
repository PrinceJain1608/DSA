#include<iostream>
using namespace std;
int main(){
  char count='A';
  int n;
  cout<<"enter number:";
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
     cout<<count<<" ";
     count++;
    }
    cout<<endl;
  }
}