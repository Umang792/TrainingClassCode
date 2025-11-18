#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s; // umg4 rty3 kmfj1 hum2
    getline(cin, s);

    vector<string> result(10, ""); // allocate for digits 0-9
    string ans = "";

    for (int i = 0; i < s.size(); i++) {

        
         if (s[i] >= '0' && s[i] <= '9') {
            int idx = s[i] - '0';
            result[idx] = ans;      // store word
            ans = "";
        } else if(s[i]=' ')
        ans.clear();
        else {
            ans += s[i];            // build word
        }
    }

    for (auto &x : result) {
        if (x != "") cout << x << " ";
    }
}
