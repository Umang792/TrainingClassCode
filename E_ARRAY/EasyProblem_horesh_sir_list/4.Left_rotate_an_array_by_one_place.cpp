//1234567
//2345671
//left rotate an array by one place
//mistake is loop go to n-1

#include<iostream>
using namespace std;
int main(){
int n;
int arr[100];
cout<<"enter size of an array";
cin>>n;
cout<<"enter the array";
for(int i=0;i<n;i++){
  cin>>arr[i];
}
int umg=arr[0];
for(int i=0;i<n-1;i++){
  arr[i]=arr[i+1];

}
arr[n-1]=umg;

for(int i=0;i<n;i++){
  cout<<arr[i];
}
return 0;
}