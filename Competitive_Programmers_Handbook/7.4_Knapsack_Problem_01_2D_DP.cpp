#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int knapsack(vi &wei, vi &val, int W){
    int n = wei.size();

    vector<vi> dp(n+1, vi (W+1,0));

    for(int i=1; i<=n; i++){
        for(int w=0; w<=W; w++){
            dp[i][w] = dp[i-1][w];

            if(w >= wei[i-1]){
                dp[i][w] = max(dp[i][w], dp[i-1][w-wei[i-1]]+val[i-1]);
            }
        }
    }
    return dp[n][W];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,W;
    cin >> n >> W;

    vi wei(n), val(n);
    for(int i=0; i<n; i++){
        cin >> wei[i] >> val[i];
    }

    int ans = knapsack(wei,val, W);
    cout << "Maximum value : " << ans << endl;

    return 0;
}