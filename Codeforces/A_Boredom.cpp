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

    int n;
    cin >> n;

    vl g(MAX,0);

    int mx =0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        g[x] +=x;
        mx = max(mx,x);
    }
    vl dp(mx+1, 0);

    dp[0] = 0;
    dp[1] = g[1];
    for(int i=2; i<=mx; i++){
        dp[i] = max(dp[i-1], dp[i-2]+g[i]);
    }
    cout << dp[mx] << endl;

    return 0;
}