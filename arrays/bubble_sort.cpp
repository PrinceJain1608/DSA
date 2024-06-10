#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{   
   for(int i=1;i<n;i++){
      for(int j=0;j<n-i;j++){
         if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
         }
      }
   }

}
void printarray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[5]={4,3,2,1,7};
  bubbleSort(arr,5);
  printarray(arr,5);
}