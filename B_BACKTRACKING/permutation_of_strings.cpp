#include<iostream>
#include<vector>
#include<map>
using namespace std;



 void issafe(vector<string>&s,){

 }

vector<string> findpermutation(vector<string>&str,int index,vector<string>&ans,string newstr)
if(str.length()==0){
  ans.push_back(newstr);
  return;
}

unordared_map<char,bool>isused;

if( issafe()==true){
for(int i=0;i<str.length();i++){

 string a= str.substr(0,i);
 string b=str.substr(i+1);
 string umg=a+b;
 findpermutation(umg,index+1,ans,newstr+str[i]);


}

}

int main(){

  string str="abc";
  vector<string>ans;
  int index=0;

  cout<<findpermutation(str,index,ans,"");
}







#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// ✅ issafe() — returns true if character not yet used in this recursion level
bool issafe(char ch, unordered_map<char, bool> &used) {
    if (used[ch]) return false;  // character already used at this level
    used[ch] = true;             // mark as used
    return true;
}

void findpermutation(string str, int index, vector<string> &ans, string newstr) {
    // 🧱 Base case
    if (str.length() == 0) {
        ans.push_back(newstr);
        return;
    }

    // ✅ Map declared once per recursion level
    unordered_map<char, bool> used;

    // 🔁 Loop through each character
    for (int i = 0; i < str.length(); i++) {
        // Check if this character is safe to use at this level
        if (!issafe(str[i], used)) continue;

        string a = str.substr(0, i);
        string b = str.substr(i + 1);
        string umg = a + b;

        findpermutation(umg, index + 1, ans, newstr + str[i]);
    }
}

int main() {
    string str = "aab";
    vector<string> ans;
    int index = 0;

    findpermutation(str, index, ans, "");

    cout << "All unique permutations of " << str << " are:\n";
    for (string s : ans) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
