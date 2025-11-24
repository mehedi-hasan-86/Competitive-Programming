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

    string x,y;
    cin >> x >> y;
    int n = x.size();
    int m = y.size();

    vector<vector<int>> dp(n+1, vector<int>(m+1,0));

    for(int i=0; i<=n; i++) dp[i][0] = i;
    for(int j=0; j<=m; j++) dp[0][j] = j;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int cost = (x[i-1] == y[j-1] ? 0 : 1);
            dp[i][j] = min({
                dp[i-1][j]+1,
                dp[i][j-1]+1,
                dp[i-1][j-1]+cost
            });
        }
    }
    cout << dp[n][m] << endl;

    return 0;
}