#include<iostream>
using namespace std;
int print(int n){
  for(int i=1;i<=n;i++){
    cout<<i<<" "<<endl;
  }
}
int main(){
  int n;
  cout<<"enter number:";
  cin>>n;
  print(n);
}