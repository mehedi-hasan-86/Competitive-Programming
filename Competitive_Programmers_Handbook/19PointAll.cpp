#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> path;
vector<int> deg;
void dfs(int u) {
    while (!adj[u].empty()) {
        int v = adj[u].back();
        adj[u].pop_back();

        auto &vec = adj[v];
        vec.erase(find(vec.begin(), vec.end(), u));

        dfs(v);
    }
    path.push_back(u);
}

int main() {
    int n, m;
    cin >> n >> m;

    adj.assign(n + 1, {});
    deg.assign(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        deg[a]++; deg[b]++;
    }
    vector<int> odd;
    for (int i = 1; i <= n; i++)
        if (deg[i] % 2 == 1)
            odd.push_back(i);

    if (!(odd.size() == 0 || odd.size() == 2)) {
        cout << "No Eulerian Path\n";
        return 0;
    }

    int start = 1;
    if (odd.size() == 2) start = odd[0];
    else start = 1;

    dfs(start);

    reverse(path.begin(), path.end());

    for (int x : path)
        cout << x << " ";
    cout << "\n";
}
