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
     dp[0]=1;
     dp[1]=1;
     dp[2]=2;

     for(int i=3;i<=n;i++){
      dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
     }
     return dp[n];
  
  }

int main(){
  int n;
  cin>>n;
  vector<int>dp(n+1,-1);
  int umg=noofhopes(n,dp);
  cout<<umg;

}