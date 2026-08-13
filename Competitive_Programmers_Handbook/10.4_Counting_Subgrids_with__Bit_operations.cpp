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

    int n = 4;
        vector<vector<int>> grid = {
        {1, 0, 1, 0},
        {0, 1, 1, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };

    vi rows(n,0);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]){
                rows[i] |= (1<<j);
            }
        }
    }
    int cnt = 0;
    for(int a = 0; a<n; a++){
        for(int b = a+1; b<n; b++){
            int  common = __builtin_popcount(rows[a] & rows[b]);
            cnt += common * ( common-1)/2;
        }
    }
    cout << cnt << endl;

    return 0;
}