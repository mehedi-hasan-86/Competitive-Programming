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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<vi> grid(n,vector<int>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }

    vi dp(m,0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && j==0){
                dp[j] = grid[i][j];
            }else if(i==0){
                dp[j] = dp[j-1] + grid[i][j];
            }else if(j==0){
                dp[j] = dp[j] + grid[i][j];
            }else {
                dp[j] = max(dp[j], dp[j-1]) + grid[i][j];
            }
        }
    }
    cout <<"Maximum sum: " << dp[m-1] << endl;


    return 0;
}