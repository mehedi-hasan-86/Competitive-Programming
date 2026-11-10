
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }

    vector<int> ans(n - 1, -1);
    int center = -1;

    for (int i = 1; i <= n; i++) {
        if (adj[i].size() >= 3) {
            center = i;
            break;
        }
    }

    int label = 0;

    if (center == -1) {
        for (int i = 0; i < n - 1; i++) {
            ans[i] = i;
        }
    }
    else {
        for (int i = 0; i < 3; i++) {
            int edgeId = adj[center][i].second;
            ans[edgeId] = label++;
        }
        for (int i = 0; i < n - 1; i++) {
            if (ans[i] == -1) {
                ans[i] = label++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        cout << ans[i] << '\n';
    }

    return 0;
}
