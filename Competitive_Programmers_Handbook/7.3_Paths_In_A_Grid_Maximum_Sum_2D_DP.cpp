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

    int n,m ;
    cin >> n >> m;
    vector<vi> grid(n, vector<int> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }
    vector<vi> dp(n, vector<int> (m,0));
    vector<vector<pi>> parent(n, vector<pi>(m));

    dp[0][0] = grid[0][0];
    parent[0][0] = {-1,-1};

    for(int j=1; j<m; j++){
        dp[0][j] = dp[0][j-1] + grid[0][j];
        parent[0][j] = {0,j-1};
    }
    for(int i=1; i<n; i++){
        dp[i][0] = dp[i-1][0] + grid[i][0];
        parent[i][0] = {i-1,0};
    }

    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(dp[i-1][j] > dp[i][j-1]){
                dp[i][j] = dp[i-1][j] + grid[i][j];
                parent[i][j] = {i-1,j};
            }else{
                dp[i][j] = dp[i][j-1] + grid[i][j];
                parent[i][j] = {i,j-1};
            }
        }
    }
    cout << "Maxium sum: " << dp[n-1][m-1] << endl;

    vector<pi> path;
    int i=n-1, j= m-1;
    while(i != -1 && j != -1){
        path.push_back({i,j});
        auto p = parent[i][j];
        i = p.first;
        j = p.second;
    }
    reverse(path.begin(), path.end());

    cout <<"Path: ";
    for(auto p : path){
        cout <<"(" <<  p.first+1 << " , " << p.second+1 << ") ";
    }
    cout << endl;
    return 0;
}