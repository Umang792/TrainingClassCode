
//run array till n-1
#include<iostream>
using namespace std;
int main(){
  int arr[100];
  cout<<"enter no of element of an array";
  int n;
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>arr[i];

  }
  bool umg=false;
  for(int i=0;i<n-1;i++){
    if(arr[i+1]<arr[i]) {
      umg=true;
      break;
    }
  }
    if(umg){
      cout<<"not sorted";
    }
    else{
      cout<<"sorted";
    }
  


}