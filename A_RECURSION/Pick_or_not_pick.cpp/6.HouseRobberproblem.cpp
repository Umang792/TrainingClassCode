//  Problem Statement
// You are a robber planning to rob houses along a street.
// Each house has some money stored in it.
// Constraint: You cannot rob two adjacent houses (if you do, the alarm will ring 🚨).
// Goal: Find the maximum amount of money you can rob.


#include<iostream>
#include<vector>
using namespace std;


int houserob(vector<int>&v,int index){
  if(index>=v.size()){
    return 0;
  }
  int x= v[index]+houserob(v,index+2);
  int y= houserob(v,index+1);
  return max(x,y);


}

int main(){

  vector<int>v;
  v.push_back(4);
  v.push_back(1);
  v.push_back(6);
  v.push_back(9);
  v.push_back(3);
 int umg=houserob(v,0);
 cout<<umg;
 return 0;
}

