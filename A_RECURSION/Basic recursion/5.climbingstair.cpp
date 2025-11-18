#include<iostream>
using namespace std;


int climbingstair(int n){
  if(n<=1){
    return 1;
  }
  else if(n==2){
    return 2;
  }

  return climbingstair(n-1)+climbingstair(n-2);


}

int main(){
  int n;
  cin>>n;
  int umg=climbingstair(n);
  cout<<umg;


}