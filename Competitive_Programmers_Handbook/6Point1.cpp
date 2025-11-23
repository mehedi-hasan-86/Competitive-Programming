#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vi coins = {1,3,4};
    int n = 6;

    vi dp(n+1, INT_MAX);
    dp[0]=0;

    for(int i=1; i<=n; i++){
        for(int c :coins){
            if(i-c >=0 && dp[i-c] != INT_MAX){
                dp[i] = min(dp[i], dp[i-c]+1);
            }
        }
    }
    cout << dp[n] << endl;

    return 0;
}