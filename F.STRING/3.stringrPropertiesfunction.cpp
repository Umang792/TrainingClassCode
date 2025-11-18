#include<iostream>
using namespace std;
int main(){

  
  string s="umang";
  s.push_back('e');
  cout<<s;


  cout<<endl;
  s.pop_back();
  cout<<s;

  cout<<endl;
  int k=s.size();
  cout<<k;
  cout<<endl;

  string s1="ghu";
  string s2="hji";
  string s3=s1+s2;
  cout<<s1;
  cout<<endl;
  cout<<s2;
  cout<<endl;
  cout<<s3;
  cout<<endl;


  // string so="ghu";
  // string s32=so*3;
  // cout<<so;
  // cout<<endl;
  // cout<<s32;


  string sku="ghul";
  string koi=sku+'a'+"u"+"umg";
  cout<<koi;
  cout<<endl;

  

}