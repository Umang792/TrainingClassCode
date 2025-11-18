//arr[i] if condition mistake
#include<iostream>
#include<vector>
using namespace std;
int main(){

  int arr[100];
  int n;
  cout<<"enter the size of an array";
  cin>>n;

  cout<<"enterthe sorted element of an array";
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }
vector<int>v;

for(int i=0;i<n;i++){
  if(i==0||arr[i]!=arr[i-1]){
    v.push_back(arr[i]);
  }
}
for(int i=0;i<n;i++){
  cout<<v[i];

}
return 0;
  
}