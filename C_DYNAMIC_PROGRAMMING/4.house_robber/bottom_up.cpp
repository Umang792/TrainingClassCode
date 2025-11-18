#include<iostream>
#include<vector>
using namespace std;

int maxrob(vector<int>&v,vector<int>&dp){
int n=dp.size();

// n==0 return dp[0]

dp[0]=v[0];
dp[1]=max(v[0],v[1]);


for(int i=2;i<n;i++){
int x=v[i]+dp[i-2];// n ghar sai chrai then n-1 si jo max hoga usai add kar diya 
int y=dp[i-1];

dp[i]= max(x,y);

}
return dp[n-1];

}

int main(){
  vector<int>v;
  v.push_back(65);
  v.push_back(100);
  v.push_back(42);
  v.push_back(32);
  v.push_back(76);
  v.push_back(78);
  int n=v.size();
  vector<int>dp(n+1,0);
  int umg=maxrob(v,dp);
  cout<<umg;


}