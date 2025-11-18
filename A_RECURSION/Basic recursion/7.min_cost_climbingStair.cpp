#include<iostream>
#include<vector>
using namespace std;

int mincoststair(vector<int>&cost,int index){

if(index==0){
  return cost[0];
}
if(index==1){
  return cost[1];
}
if(index==2){
  return cost[2];
}

int x=cost[index]+mincoststair(cost,index-1);
int y=cost[index]+mincoststair(cost,index-2);
int z=cost[index]+mincoststair(cost,index-3);

return min(x,min(y,z));
}

int main(){

vector<int>cost;
cost.push_back(1);
cost.push_back(100);
cost.push_back(57);
cost.push_back(23);
cost.push_back(1);
cost.push_back(67);
  
int index=cost.size()-1;
int umg=mincoststair(cost,index);
cout<<umg;

}