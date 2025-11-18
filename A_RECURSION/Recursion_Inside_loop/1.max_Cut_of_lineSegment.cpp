#include<iostream>
using namespace std;

int maxcutlength(int a,int b,int c,int size){
  if(size==0){
    return 0;
  }
  if(size<0){
    return INT_MIN;
  }

  int x=1+maxcutlength(a,b,c,size-a);
  int y=1+maxcutlength(a,b,c,size-b);
  int z=1+maxcutlength(a,b,c,size-c);

  return max(x, max(y, z));


}

int main(){
   
  int umg= maxcutlength(2,3,4,14);
  cout<<umg;
  return 0;

}


