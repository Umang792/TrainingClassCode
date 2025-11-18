//clockwise and anticlockwise booth

#include<iostream>
using namespace std;


void clockwise(string& s1){
  // char ch=s1[0];
  // int index=1;
  // while(index>=s1.size()){
  //   s1[index-1]=s1[index];
  //   index++;//rem
  // }
  // s1[s1.size()-1]=ch;
  char ch = s1[s1.size() - 1];
    for(int i = s1.size() - 1; i > 0; i--)
        s1[i] = s1[i - 1];
    s1[0] = ch;

}

void anticlockwise(string s1){
  // char ch=s1[s1.size()-1];
  // int index=s1.size()-2;
  // while(index>=0){
  //   s1[index+1]=s1[index];
  //   index--;//rem
  // }
  // s1[0]=ch;
  char ch = s1[0];
   for(int i = 0; i < s1.size() - 1; i++)
        s1[i] = s1[i + 1];
    s1[s1.size() - 1] = ch;

}

int main(){
  string s1="asdfgh";
  string s2="dfghas";

  clockwise(s1);
  clockwise(s1);
  if(s1==s2){
    cout<<"yes";
  }

  anticlockwise(s1);
  anticlockwise(s1);
  if(s1==s2){
    cout<<"yes";
  }
  return 0;
}