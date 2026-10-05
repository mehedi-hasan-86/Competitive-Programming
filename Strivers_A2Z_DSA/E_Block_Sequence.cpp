#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vl;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

// int n;
// vi a;
// int solve(int i){
//     if(i>=n) return 0;

//     int ans = 1+solve(i+1);
//     int x = a[i];

//     if(i+x<n){
//         ans = min(ans,solve(i+x+1));
//     }
//     return ans;
// }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;




    while(t--){
        int n;
        cin >> n;
        // a.resize()
        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vi dp(n+1,0);
        vi suf(n+2,INT_MAX);

        dp[n] = 0;
        suf[n] = dp[n]+n;
        for(int i=n-1; i>=0; i--){
            dp[i] = 1+dp[i+1];
            int k = i+ a[i]+1;

            if(k<=n){
                dp[i] = min(dp[i], suf[k]-k);
            }
            suf[i] = min(dp[i]+i, suf[i+1]);
        }
        cout << dp[0] << endl;

    }

    return 0;
}