#include<iostream>
#include<vector>
using namespace std;
int maxrob(vector<int>&v,int index){
if(index==0){
return v[0];
}
if(index<0){
  return 0;
}

int x=v[index]+maxrob(v,index-2);// n ghar sai chrai then n-1 si jo max hoga usai add kar diya 
int y=maxrob(v,index-1);

return max(x,y);

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
  int umg=maxrob(v,k);
  cout<<umg;
  return 0;

}