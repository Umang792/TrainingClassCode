
//use single loop
//use int_min

#include<iostream>
using namespace std;
int main(){
  int arr[11]={4,56,43,87,92,54,2,3,87,67,34};
  int largest=0;
  for(int i=0;i<11;i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
    int seclar=0;

    for(int i=0;i<11;i++){
      if(arr[i]>seclar && arr[i]!=largest){
        seclar=arr[i];
      }
    }
  cout<<largest;
  cout<<seclar;
  return 0;

}