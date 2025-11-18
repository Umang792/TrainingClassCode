//count number of subset
#include<iostream>
#include<vector>
using namespace std;

int numofsubset(vector<int>&v,int index){
  if(v.size()==index){
    return 1;

  }
  return numofsubset(v,index+1)+numofsubset(v,index+1);

}
int main(){
  vector<int> v;
v.push_back(3);
v.push_back(5);
v.push_back(2);
v.push_back(7);
v.push_back(9);
   
  int umg=numofsubset(v,0);
  cout<<umg;
  return 0;


}