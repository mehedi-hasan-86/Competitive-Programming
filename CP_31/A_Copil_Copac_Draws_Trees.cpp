#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int M = 1e6 + 5;
vector<pair<int,int>> adj[M];



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n; cin >> n;
        for(int i=1; i<=n; i++) adj[i].clear();

        for(int i=1; i<=n-1; i++){
            int u,v; cin >> u >> v;
            adj[u].push_back({v,i});
            adj[v].push_back({u,i});
        }
        vi dp(n+1,0), lst_edg(n+1,0);
        queue<int> q;
        q.push(1);
        dp[1] = 1; lst_edg[1] = 0;

        while(!q.empty()){
            int u = q.front(); q.pop();
            for(auto &e : adj[u]){
                int v = e.first, idx = e.second;
                if(dp[v]) continue;

                if(idx<lst_edg[u]) dp[v] = dp[u]+1;
                else dp[v] = dp[u];

                lst_edg[v] = idx;
                q.push(v);
            }
        }
        int ans = *max_element(dp.begin()+1, dp.end());
        cout << ans << endl;

    }

    return 0;
}