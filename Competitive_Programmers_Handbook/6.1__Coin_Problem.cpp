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

int greedyCoins(vi &coins, int target){
    sort(coins.rbegin(), coins.rend());

    int cnt = 0;
    int rem = target;

    for(int coin : coins){
        cnt += rem/coin;
        rem %=coin;
    }
    return (rem==0) ? cnt : -1;
}

int dpCoins(vi &coins, int target){
    vi dp(target+1, INF);
    dp[0] = 0;

    for(int x = 1; x<=target; x++){
        for(int c : coins){
            if(x>=c){
                dp[x] = min(dp[x], dp[x-c]+1);
            }
        }
    }
    return (dp[target] == INF) ? -1 : dp[target];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int target;
    cin >> target;
    int res = dpCoins(a, target);
    cout << res << endl;

    return 0;
}