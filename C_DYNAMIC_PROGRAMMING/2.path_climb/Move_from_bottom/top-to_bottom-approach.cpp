#include<iostream>
#include<vector>
using namespace std;

int climbstair(int n,vector<int>&dp){
  if(n==0){
    return 1;
  }
  if(n==1){
    return 1;
  }
  

  if(dp[n] != -1){
    return dp[n];
  }
return dp[n]=climbstair(n-1,dp)+climbstair(n-2,dp);
 
}

int main(){
  int n;
  cin>>n;
  vector<int>dp(n+1,-1);
  int umg=climbstair(n,dp);
  cout<<umg;

}