#include<iostream>
#include<vector>
using namespace std;
int main(){
  string s="dfgghsytruueiiwkdl";
  vector<int>ans(26,0);                          //26 rem it 

  for(int i=0;i<s.size();i++){
   ans[s[i]-'a']++;
  }                                               //rem it

  string answer;
  for(int i=0;i<ans.size();i++){

    char ch='a'+i;
    while(ans[i]){
      answer=answer+ch;
      ans[i]--;
    }

  }
  cout<<answer;


}