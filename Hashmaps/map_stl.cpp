#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
  unordered_map<string,int> m;

  //insertion method1
  pair<string,int> p=make_pair("Prince",3);
  m.insert(p);

  //insertion method 2
  m["Jain"]=2;
  m["hello"]=4;
  m["chotu"]=88;
  m["supa"]=7;

  cout<<m["Jain"]<<endl;
  cout<<m.at("Prince")<<endl;;

  cout<<m.size()<<endl;

  cout<<m.count("Jain")<<endl;  //entry is present or not

  m.erase("Jain");  //to delete entry
  cout<<m.size()<<endl;

  //traversing method 1
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }
cout<<endl;
  //traversing method 2
  unordered_map<string,int>:: iterator it=m.begin();
  while(it!=m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
  }
}