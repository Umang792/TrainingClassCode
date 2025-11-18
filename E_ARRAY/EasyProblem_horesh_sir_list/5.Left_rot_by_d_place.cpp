
//1234567
//d=3
//4567,123


#include<iostream>
using namespace std;
int main(){
int n;
int arr1[100];
int arr2[100];
cout<<"enter the size of an array";
cin>>n;
for(int i=0;i<n;i++){
  cin>>arr1[i];
}

cout<<"enter the value of d ";

int d = d % n;//remember

cin>>d;
int j=0;//remember concept
for(int i=d;i<n;i++){
arr2[j++]=arr1[i];
}

for(int i=0;i<d;i++){
arr2[j++]=arr1[i];
}

for(int i=0;i<n;i++){
  cout<<arr2[i];
}

return 0;
}