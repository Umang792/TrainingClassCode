#include<iostream>
#include<vector>
using namespace std;

int noofhopes(int n){
  if(n==2){
    return 2;
  }
  if(n==0){
    return 1;
  }
  if(n==1){
    return 1;
  }

  return noofhopes(n-1)+noofhopes(n-2)+noofhopes(n-3);
}
int main(){
  int n;
  cin>>n;
  int umg=noofhopes(n);
  cout<<umg;

}