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
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k = 3;
    int n = 8;

       vector<vector<int>> price = {
        {6, 9, 5, 2, 8, 9, 1, 6}, 
        {8, 2, 6, 2, 7, 5, 7, 2},  
        {5, 3, 9, 7, 3, 5, 1, 4}   
    };

    const int INF = 1e9;
    vector<vector<int>> dp(1<<k, vector<int>(n,INF));

    for(int x=0; x<k; x++){
        dp[1<<x][0] = price[x][0];
    }

    for(int d = 1; d<n; d++){
        for(int mask = 0; mask<(1<<k); mask++){
            dp[mask][d] = dp[mask][d-1];

            for(int x = 0; x<k; x++){
                if(mask &(1<<x)){
                    int prevMask = mask ^ (1<<x);
                    dp[mask][d] = min(dp[mask][d], dp[prevMask][d-1]+price[x][d]);
                }
            }
        }
    }
    int answer = dp[(1<<k)-1][n-1];
    cout << answer << endl;

    return 0;
}