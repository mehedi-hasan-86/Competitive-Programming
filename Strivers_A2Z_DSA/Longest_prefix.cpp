#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
           if(strs.empty()) return "";

           string ans = strs[0];

           for(int i=1; i<strs.size(); i++){
            while(strs[i].find(ans) != 0){
                ans = ans.substr(0, ans.size()-1);
                if(ans.empty()) return "";
            }
           }
           return ans;
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution sol;

    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    cout << sol.longestCommonPrefix(s);
    

    return 0;
}