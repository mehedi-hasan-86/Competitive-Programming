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
    vi dp(W+1, 0);

    for(int i=0; i<n; i++){
        for(int w = W; w>= wei[i]; w--){
            dp[w] = max(dp[w], dp[w-wei[i]]+val[i]);
        }
    }
    return dp[W];
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
    int ans = knapsack(wei, val, W);
    cout << ans << endl;

    

    return 0;
}