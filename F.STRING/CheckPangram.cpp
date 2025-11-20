#include<iostream>
#include<vector>
using namespace std;
int main(){
  int umg=false;
  string s="a quick brown fox jumps over the lazy dog";
  vector<int>ans(26,0) ;
  
  for(int i=0;i<s.size();i++){
    if(s[i]>='a'&&s[i]<='z'){
      ans[s[i]-'a']=1;
    }

  }
  for(int i=0;i<26;i++){
    if(ans[i]==0){
      umg=true;
      break;
    }
  }
  if(umg){
    cout<<"notpangram";
  }
  else{
    cout<<" pangram";
  }

  return 0;

}