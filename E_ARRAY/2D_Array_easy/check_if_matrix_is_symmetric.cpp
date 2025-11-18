#include<iostream>
using namespace std;
int main(){
  int arr[10][10];

  cout<<"enter the size of square matrix";
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }

  cout<<"matrix is";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j];
      cout<<" ";
    }
    cout<<endl;
  }

  cout<<"checking of symmetricity";
  cout<<endl;
  int umg=true;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j]!=arr[j][i]){
        umg=false;
        break;
      }
    }
  }

  if(umg){
    cout<<"symmetric matrix";
  }
  else{
    cout<<"notsymmetric";
  }
  return 0;
}