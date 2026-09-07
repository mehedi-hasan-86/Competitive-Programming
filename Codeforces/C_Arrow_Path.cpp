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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<string> grid(2);
        cin >> grid[0] >> grid[1];

        vector<vector<bool>> vis(2, vector<bool>(n,false));

        queue<pair<int,int>> q;
        vis[0][0] = true;
        q.push({0,0});

        while(!q.empty()){
            auto it = q.front();
            q.pop();

            int dr[] = {-1,1,0,0};
            int dc[] = {0,0,-1,1};
            for(int i=0; i<4; i++){
                int nr = it.first + dr[i];
                int nc = it.second + dc[i];

                if(nr<0 || nr>=2 || nc < 0 || nc >= n) continue;

                if(grid[nr][nc]=='<') nc--;
                else nc++;

                if(!vis[nr][nc]){
                    vis[nr][nc] = true;
                    q.push({nr,nc});
                }
            }
        }
        if(vis[1][n-1]) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }

    

    return 0;
}