#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Precompute adjacency
    vector<vector<int>> adj(7);

    for(int v = 1; v <= 6; v++){
        for(int u = 1; u <= 6; u++){
            if(u != v && u != 7 - v){
                adj[v].push_back(u);
            }
        }
    }

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> dp(7, INF), newDp(7, INF);

        // Base case
        for(int v = 1; v <= 6; v++)
            dp[v] = (a[0] != v);

        for(int i = 1; i < n; i++){
            fill(newDp.begin(), newDp.end(), INF);

            for(int v = 1; v <= 6; v++){
                for(int u : adj[v]){
                    newDp[v] = min(newDp[v],
                                   dp[u] + (a[i] != v));
                }
            }

            dp = newDp;
        }

        cout << *min_element(dp.begin() + 1, dp.end()) << "\n";
    }

    return 0;
}
