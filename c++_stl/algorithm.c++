#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);
  cout<<"finding 3:"<<binary_search(v.begin(),v.end(),3)<<endl;

  int a=4;
  int b=5;
  cout<<max(a,b)<<endl;
  cout<<min(a,b)<<endl;
  swap(a,b);
  cout<<a<<" "<<b<<endl;
  string s="Prince Jain";
  reverse(s.begin(),s.end());
  cout<<s<<endl;
  rotate(v.begin(),v.begin()+1,v.end());
  for(auto i:v){
    cout<<i<<" ";
  }cout<<endl;
  sort(v.begin(),v.end());
   for(auto i:v){
    cout<<i<<" ";
  }cout<<endl;
  
}