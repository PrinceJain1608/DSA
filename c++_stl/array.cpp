#include<iostream>
#include<array>
using namespace std;
int main(){
  array<int,4> a={1,2,3,4};
  cout<<"size:"<<a.size()<<endl;
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" "<<endl;
  }
  cout<<"element at index 2:"<<a.at(2)<<endl;
  cout<<"array is empty or not:"<<a.empty()<<endl;
  cout<<"1st element:"<<a.front()<<endl;
  cout<<"last element:"<<a.back()<<endl;
}