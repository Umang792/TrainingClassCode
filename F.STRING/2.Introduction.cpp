#include<iostream>
using namespace std;
int main(){
  char umgu[5]={'a','c','d','d','e'};
  for(int i=0;i<5;i++){
  cout<<umgu[i];
  cout<<endl;
  }

  umgu[2]='k';
  umgu[3]='\0';
  cout<<umgu;
  cout<<endl;


  string s="umang";
  cout<<s;

}


//space
//tab
//enter sai string terminate hoti hai