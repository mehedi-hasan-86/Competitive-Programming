#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'

const int MOD = 1e9+7;

bool isPalindrome(int x){
    int original = x, reversed = 0;

    while(x>0){
        reversed = reversed*10 + x%10;
        x /=10;
    }
    return original == reversed;
}

void generate(int rem, int mx, lli &cnt){
    if(rem ==0){
        cnt++;
        return;
    }
    for(int x = min(rem, mx); x>=1; x--){
        if(!isPalindrome(x)) continue;
        generate(rem-x,x,cnt);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vi q;
    int t;
    cin >> t;


    int mxN = 0;
    while(t--){
        int n;
        cin >> n;

        lli cnt = 0;
        q.push_back(n);
        mxN = max(mxN,n);
        // generate(n,n,cnt);
        // cout << cnt << endl;
    }
    vi pldm;
    for(int x=1; x<=mxN; x++){
        if(isPalindrome(x)){
            pldm.push_back(x);
        }
    }
    vl dp(mxN+1, 0);
    dp[0] = 1;
    for(int x : pldm){
        for(int s = x; s<=mxN; s++){
            dp[s] = (dp[s]+dp[s-x])% MOD;
        }
    }
    for(int n : q){
        cout << dp[n] << endl;
    }

    return 0;
}