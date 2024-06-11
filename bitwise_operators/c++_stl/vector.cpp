#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> a;
  cout<<"capacity:"<<a.capacity()<<endl;
  a.push_back(5);
  cout<<"capacity:"<<a.capacity()<<endl;
  a.push_back(2);
  cout<<"capacity:"<<a.capacity()<<endl;
  a.push_back(1);
  cout<<"capacity:"<<a.capacity()<<endl;
  cout<<"size:"<<a.size()<<endl;
  cout<<"front:"<<a.front()<<endl;
  cout<<"back:"<<a.back()<<endl;
  a.pop_back();
  //at
  //vector<int> v(5,1);   {1,1,1,1,1}
  }