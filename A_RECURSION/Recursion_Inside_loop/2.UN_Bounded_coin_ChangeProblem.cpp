#include<iostream>
#include<vector>
using namespace std;

int Unboundedcoinchange(vector<int>&v,int sum,int index){

  if(sum==0){
    return 1;
  }
  if(sum<0||index<0){
    return 0;
  }
  int y=Unboundedcoinchange(v,sum-v[index],index);
  int x=Unboundedcoinchange(v,sum,index-1);
  return x+y; 

}

int main(){

vector<int> v;
v.push_back(4);
v.push_back(3);
v.push_back(7);
v.push_back(9);
v.push_back(2);

int umg=Unboundedcoinchange(v,9,v.size()-1);
cout<<umg;
return 0;

}


// 2 + 2 + 2 + 3

// 2 + 7

// 3 + 3 + 3

// 4 + 2 + 3

// 9

// ✅ Ea

