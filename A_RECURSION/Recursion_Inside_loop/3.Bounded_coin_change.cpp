#include<iostream>
#include<vector>
using namespace std;

int coinchange(vector<int>&v,int sum,int index){

  if(sum==0){
    return 1;
  }
  if(sum<0||index<0){
    return 0;
  }
  int y=coinchange(v,sum-v[index],index-1);
  int x=coinchange(v,sum,index-1);
  return x+y; 

}

int main(){

vector<int> v;
v.push_back(4);
v.push_back(3);
v.push_back(7);
v.push_back(9);
v.push_back(2);

int umg=coinchange(v,9,v.size()-1);
cout<<umg;
return 0;

}
