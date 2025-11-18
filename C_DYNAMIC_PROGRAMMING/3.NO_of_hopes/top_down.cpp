#include<iostream>
#include<vector>
using namespace std;

int noofhopes(int n,vector<int>&dp){
  if(n==0){
    return 1;
  }
  if(n==1){
    return 1;
  }
  if(n==2){
    return 2;
  }

  if(dp[n]!=-1){
    return dp[n];
  }

  return dp[n]= noofhopes(n-1,dp)+noofhopes(n-2,dp)+noofhopes(n-3,dp);
}
int main(){
  int n;
  cin>>n;
  vector<int>dp(n+1,-1);
  int umg=noofhopes(n,dp);
  cout<<umg;

}