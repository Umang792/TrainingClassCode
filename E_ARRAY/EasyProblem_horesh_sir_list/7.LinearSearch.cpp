#include<iostream>
using namespace std;
int main(){
  int arr[100];
  int n;
  cin>>n;
  int sel;
  cin>>sel;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  bool umg =false;

  for(int i=0;i<n;i++){
    if(arr[i]==sel){
      umg=true;
      break;

    }
  }
  if(umg){
    cout<<"f0und";
  }
  else{
    cout<<"not";
  }
  return 0;
}