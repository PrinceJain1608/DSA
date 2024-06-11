#include<iostream>
#include<map>
using namespace std;
int main(){
  map<int,string> m;
  m[1]="prince";
  m[3]="chotu";
  m[2]="jain";
  m.insert({4,"don"});
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }
  //erase
}