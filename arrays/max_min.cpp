#include<iostream>
#include<climits>
using namespace std;
int maxx(int a[],int n){
  int max=INT_MIN;
  for(int i=0;i<n;i++){
    if(a[i]>max){       ////int maxi=min(maxi,a[i]);
      max=a[i];
    }
  }
  return max;
}
int minn(int a[],int n){
  int min=INT_MAX;
  for(int i=0;i<n;i++){
    if(a[i]<min){      //int mini=min(mini,a[i]);
      min=a[i];
    }
  }
  return min;
}
int main(){
  int size;
  cout<<"enter total number of elements:";
  cin>>size;
  int a[100];
  for(int i=0;i<size;i++){
    cin>>a[i];
  }
  int larger=maxx(a,size);
  int smaller=minn(a,size);
  cout<<"max value:"<<larger<<endl;
  cout<<"min value:"<<smaller<<endl;
}