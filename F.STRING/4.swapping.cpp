#include<iostream>
using namespace std;
int main( ){
  string umg;
  cin>>umg;
  cout<<umg;
  cout<<endl;

  reverse(umg.begin(),umg.end());
  cout<<umg;
}
