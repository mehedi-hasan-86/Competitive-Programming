#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void solve(){
    int n;
    cin >> n;

    vector<string> grid(n);
    for(int i=0; i<n; i++){
        cin >> grid[i];
    }
    vector<vector<bool>> visited(n, vector<bool>(n,false));
    int ans = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(visited[i][j]) continue;

            vector<pair<int,int>> s;
            s.push_back({i,j});
            s.push_back({j,n-1-i});
            s.push_back({n-1-i, n-1-j});
            s.push_back({n-1-j,i});
            
            int zc = 0, oc = 0;
            for(auto p: s){
                int x= p.first;
                int y = p.second;

                if(grid[x][y]=='0') zc++;
                else oc++;
                
                visited[x][y] = true;
            }
            ans += min(zc,oc);
           
        }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}