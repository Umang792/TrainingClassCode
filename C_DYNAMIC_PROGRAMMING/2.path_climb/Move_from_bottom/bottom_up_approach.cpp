// #include<iostream>
// #include<vector>
// using namespace std;

// void stairpath(int n,vector<int>&dp){
  

//   dp[0]=1;
//   dp[1]=1;

//   for(int i=2;i<=n;i++){
//      dp[i]=dp[i-1]+dp[i-2];
//   }
// }

// int main(){
//   int n;
//   cin>>n;
//   vector<int>dp(n+1,-1);
//   stairpath(n,dp);
//   cout<<dp[n];
//   //cout<<umg;
//   return 0;

// }




#include <iostream>
#include <vector>
using namespace std;

int stairpath(int n, vector<int>& dp) {
   if(n <= 1) return 1;
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    vector<int> dp(n+1, 0); // initialize with 0
    int result = stairpath(n, dp);
    cout << result;
    return 0;
}
