#include<iostream>
#include<vector>
using namespace std;

int fibo_bottom_up(int n,vector<int>&dp){
  if(n<=0){
    return 0;
  }
  dp[0]=0;
  dp[1]=1;

  // if(dp[n]!=-1){
  //   return dp[n];
  // }

  for(int i=2;i<=n;i++){
    dp[i]=dp[i-1]+dp[i-2];
  }
  return dp[n];

}

int main(){
  int n;
  cin>>n;
  vector<int>dp(n+1,-1);
  int umg=fibo_bottom_up(n,dp);
  cout<<umg;
}