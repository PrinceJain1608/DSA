#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter number:";
  cin>>n;
  for(int i=1;i<=n;i++){
    int value=i;
    for(int j=1;j<=i;j++){
      cout<<value<<" ";
      value++;
    }
    cout<<endl;
  }
}