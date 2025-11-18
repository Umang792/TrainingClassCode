#include<iostream>
#include<vector>
using namespace std;

int dpfibbonacci_top_to_bottom(int num,vector<int>&dp){
if(num<0){
  return 0;
}
if(num==0){
  return 0;
}
if(num==1){
  return 1;
}
if(dp[num]!=-1){
  return dp[num];
}

return dp[num]=dpfibbonacci_top_to_bottom(num-1,dp)+dpfibbonacci_top_to_bottom(num-2,dp);

}


int main(){

  int num;
  cin>>num;
  vector<int>dp(num+1,-1);
  int umg=dpfibbonacci_top_to_bottom( num,dp);
  cout<<umg;
  return 0;

}