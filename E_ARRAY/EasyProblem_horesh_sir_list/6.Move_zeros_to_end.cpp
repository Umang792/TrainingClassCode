//move zeros to end
#include<iostream>
using namespace std;
int main(){
  int arr[100];
  cout<<"enter the size of an array";
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int i=0;
  int j=n-1;
  while(i<j){
    if(arr[i]==0 && arr[j]==0){
      j--;
    }
    if(arr[i]!=0 && arr[j]!=0){
      i++;

    }
    if(arr[i]!=0 && arr[j]==0){
      i++;
      j--;

    }
    if(arr[i]==0 && arr[j]!=0){
      swap(arr[i],arr[j]);
      i++;
      j--;
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  return 0;
}