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
    bool isPalindrome(int x) {

        string s = to_string(x);
        string b = s;
        reverse(b.begin(), b.end());
        return b==s;
        
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
     Solution sol;

    int n;
    cin >> n;

    cout << sol.isPalindrome(n) << endl;

    return 0;
}