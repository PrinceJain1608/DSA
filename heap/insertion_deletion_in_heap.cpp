// Heap is the complete binary tree that comes with its own heap property and the left node will fill first.

#include<iostream>
using namespace std;
class heap{
  public:
  int arr[100];
  int size;
  heap(){
    arr[0]-1;
    size=0;
  }
  void insert(int val){
  size++;
  int index=size;
  arr[index]=val;
  while (index>1)
  {
    int parent=index/2;
    if(arr[parent]<arr[index]){
      swap(arr[parent],arr[index]);
      index=parent;
    }
    else{
      return;
    }
  }
}
void deleteFromHeap(){
  if(size==0){
    cout<<"nothing to delete"<<endl;
    return;
  }
  arr[1]=arr[size];
  size--;

  int i=1;
  while(i<size){
    int leftIndex=2*i;
    int rightIndex=2*i+1;
    if(leftIndex<size && arr[i]<arr[leftIndex] && arr[leftIndex]<arr[rightIndex]){
      swap(arr[i],arr[leftIndex]);
      i=leftIndex;
    }
    else if(rightIndex<size && arr[i]<arr[rightIndex] && arr[leftIndex]<arr[rightIndex]){
      swap(arr[i],arr[rightIndex]);
      i=rightIndex;
    }
    else{
      return;
    }
  }
}
void print(){
  for(int i=1;i<=size;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
  }
};

int main(){
  heap h;
  h.insert(50);
  h.insert(55);
  h.insert(53);
  h.insert(52);
  h.insert(54);
  h.print();
  h.deleteFromHeap();
  h.print();
}

// TC- O(log n)