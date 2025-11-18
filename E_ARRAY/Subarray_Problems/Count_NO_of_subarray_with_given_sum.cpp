#include<iostream>
using namespace std;
int main(){
  int arr[10]={6,2,8,4,3,1,7,1,3,5};
  int umg=8;
  

int count=0;
for(int s=0;s<10;s++){
  for(int e=s;e<10;e++){
    int sum=0;
    for(int t=s;t<=e;t++){
      sum=sum+arr[t];
    }
    if(sum==umg){
      count++;
    }
  }

}
cout<<count;
return 0;
}