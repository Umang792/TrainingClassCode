#include<iostream>
#include<vector>
using namespace std;


int countsubset(vector<int>&v,int index,int target){
  
  if(target==0){
    return 1;
  }
  if(index==v.size()){
    return 0;
  }
  if(v[index]>target){
  return countsubset(v,index+1,target);
}
return countsubset(v,index+1,target)+countsubset(v,index+1,target-v[index]);

}

int main(){
  vector<int>v;
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  v.push_back(9);
  v.push_back(3);

  
  int sum=0;
  for(int i=0;i<v.size();i++){
     sum=sum+v[i];
  }
  
  
  int umg=countsubset(v,0,sum);
  cout<<umg;
}
