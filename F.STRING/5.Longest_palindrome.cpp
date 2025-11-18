//longest palindrome

#include<iostream>
#include<vector>
using namespace std;
int main(){
  string s;
  cin>>s;
  cout<<s;
  cout<<endl;

  vector<int>small(26,0);
  vector<int>capital(26,0);

  for(int i=0;i<s.size();i++){//care about s.size()-1 not use it 
    if(s[i] >= 'a' && s[i] <= 'z'){//rem it
    int umg=s[i]-'a';
    small[umg]++;
    }
    else{
     int umg=s[i]-'A';
     capital[umg]++;
    }
  }

  int count=0;
  bool umg=0;
  for(int i=0;i<26;i++){
    if(small[i]%2==0){
      count=count+small[i];
    }
    else{
     count=count+small[i]-1;
     umg=1;

    }
  }

  for(int i=0;i<26;i++){
    if(capital[i]%2==0){        //it also check for even 
      count=count+capital[i];
    }
    else{
     count=count+capital[i]-1;
     umg=1;

    }
  }
  count=count+umg;
  cout<<count;
  return 0;
}