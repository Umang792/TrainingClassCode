#include<iostream>
using namespace std;
int main(){
int arr[20]={3,6,8,4,9,0,1,2};

for(int s=0;s<8;s++){
  for(int e=s;e<8;e++){
    for(int t=s;t<=e;t++){
      cout<<arr[t];
    }
    cout<<" ";
  }
  cout<<endl;
}

}