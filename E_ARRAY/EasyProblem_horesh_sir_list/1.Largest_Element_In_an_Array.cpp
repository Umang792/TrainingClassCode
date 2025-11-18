//compare with max not in if condition
#include<iostream>
using namespace std;
int main(){
  int arr[100];
  cout<<"enter the element of an array";
  int n;
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int max=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }  
  }
cout<<max;
return 0; 
}