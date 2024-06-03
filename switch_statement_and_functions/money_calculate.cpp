#include<iostream>
using namespace  std;
int main(){
  int n;
  cout<<"enter money:";
  cin>>n;
  int hundred,fifty,twenty,ten,one;
  switch(1){
    case 1:
       hundred=n/100;
      cout<<"hundred notes required:"<<hundred<<endl;
      n=n%100;
    case 2:
       fifty=n/50;
      cout<<"fifty notes required:"<<fifty<<endl;
      n=n%50;
    case 3:
       twenty=n/20;
      cout<<"twenty notes required:"<<twenty<<endl;
      n=n%20;
    case 4:
       ten=n/10;
      cout<<"ten notes required:"<<ten<<endl;
      n=n%10;
    case 5:
       one=n/1;
      cout<<"one notes required:"<<one<<endl;
      n=n%1;
  }
}

