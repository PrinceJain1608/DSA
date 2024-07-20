#include<iostream>
#include<queue>
using namespace std;
int main(){
  priority_queue<int> pq;   //max heap
  pq.push(4);
  pq.push(2);
  pq.push(5);
  pq.push(3);
  cout<<pq.top()<<endl;
  cout<<pq.empty()<<endl;
  pq.pop();
  cout<<pq.size()<<endl;
  

  //min heap
  priority_queue<int,vector<int>,greater<int>> min;
  min.push(4);
  min.push(2);
  min.push(5);
  min.push(3);
  cout<<min.top()<<endl;
  cout<<min.empty()<<endl;
  min.pop();
  cout<<min.size()<<endl;
  
}