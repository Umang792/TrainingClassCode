#include<iostream>
#include<vector>
using namespace std;
int maxrob(vector<int>&v,int index,vector<int>&dp){
if(index==0){
return v[0];
}
if(index==1){
  return max(v[0],v[1]);
}

if(dp[index]!=-1){
  return dp[index];
}

int x=v[index]+maxrob(v,index-2,dp);// n ghar sai chrai then n-1 si jo max hoga usai add kar diya 
int y=maxrob(v,index-1,dp);

return dp[index]=max(x,y);

}

int main(){
  vector<int>v;
  v.push_back(56);
  v.push_back(43);
  v.push_back(103);
  v.push_back(506);
  v.push_back(5);
  v.push_back(6);
  v.push_back(32);
  int k=v.size()-1;

  vector<int>dp(k+1,-1);
  
  int umg=maxrob(v,k,dp);
  cout<<umg;
  return 0;

}