#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int to, capacity, rev;
};

class MaxFlow {
public:
    int n;
    vector<vector<Edge>> adj;

    MaxFlow(int n) {
        this->n = n;
        adj.resize(n);
    }

    void addEdge(int u, int v, int w) {
        Edge a = {v, w, (int)adj[v].size()};
        Edge b = {u, 0, (int)adj[u].size()}; 
        adj[u].push_back(a);
        adj[v].push_back(b);
    }

    int bfs(int s, int t, vector<int>& parent, vector<int>& parentEdge) {
        fill(parent.begin(), parent.end(), -1);
        queue<int> q;
        q.push(s);
        parent[s] = s;

        while (!q.empty()) {
            int u = q.front(); q.pop();

            for (int i = 0; i < adj[u].size(); i++) {
                Edge &e = adj[u][i];
                
                if (parent[e.to] == -1 && e.capacity > 0) {
                    parent[e.to] = u;
                    parentEdge[e.to] = i;
                    if (e.to == t) return 1;
                    q.push(e.to);
                }
            }
        }
        return 0;
    }

    int maxFlow(int s, int t) {
        int flow = 0;
        vector<int> parent(n), parentEdge(n);

        while (bfs(s, t, parent, parentEdge)) {
            int path_flow = INT_MAX;
            
            for (int v = t; v != s; v = parent[v]) {
                int u = parent[v];
                int idx = parentEdge[v];
                path_flow = min(path_flow, adj[u][idx].capacity);
            }
            for (int v = t; v != s; v = parent[v]) {
                int u = parent[v];
                int idx = parentEdge[v];

                adj[u][idx].capacity -= path_flow;
                adj[v][adj[u][idx].rev].capacity += path_flow;
            }

            flow += path_flow;
        }
        return flow;
    }
};

int main() {
    MaxFlow mf(6);

    mf.addEdge(0, 1, 10);
    mf.addEdge(0, 2, 5);
    mf.addEdge(1, 2, 15);
    mf.addEdge(1, 3, 10);
    mf.addEdge(2, 4, 10);
    mf.addEdge(3, 4, 10);
    mf.addEdge(3, 5, 10);
    mf.addEdge(4, 5, 10);

    cout << "Maximum Flow = " << mf.maxFlow(0, 5) << "\n";
}
