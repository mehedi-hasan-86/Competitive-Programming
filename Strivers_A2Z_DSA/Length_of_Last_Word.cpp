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
    int lengthOfLastWord(string s) {
         int n = s.size();
         int cnt = 0;

         int i = n-1;

         while(i>=0 && s[i] == ' '){
            i--;
         }

         while(i>=0 && s[i] != ' '){
            cnt++;
            i--;
         }
         return cnt;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    Solution sol;
    string s ;
    cin >> s;

    cout << sol.lengthOfLastWord(s) << endl;

    return 0;
}