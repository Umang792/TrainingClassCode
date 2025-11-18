#include<iostream>
using namespace std;
int main(){
int arr[20]={3,6,8,-14,9,0,1,2};
int k=12;

bool umg=false;
for(int s=0;s<8;s++){
  for(int e=s;e<8;e++){
    int sum=0;

    for(int t=s;t<=e;t++){
      sum=sum+arr[t]; 
      }
      if(sum==k){
        umg=true;
        break;
    }
  } 
}
 if(umg){
  cout<<"found sum ";
 }
 else{
  cout<<"not found";
 }
}