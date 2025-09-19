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
    bool isPalindrome(string s) {
        int n = s.size();
        string res = "";
        for(int i=0; i<n; i++){
            if(isalnum(s[i])){
                s[i] = tolower(s[i]);
                res.push_back(s[i]);
            }
        }
        string rev = res;
        reverse(rev.begin(), rev.end());

        return rev == res;
        
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Solution sol;

    string s;
    getline(cin , s);

    cout << sol.isPalindrome(s) << endl;

    return 0;
}