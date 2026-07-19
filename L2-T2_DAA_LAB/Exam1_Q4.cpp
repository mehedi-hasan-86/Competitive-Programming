#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const lli INF = 1e18;
void dijkstra(vector<vector<pair<int,int>>> &adj, int src,int n){
    vector<lli> dist(n,INF);

    priority_queue<
        pair<lli,int>,
        vector<pair<lli,int>>,
        greater<pair<lli,int>>
    > pq;

    dist[src] = 0;
    pq.push({0,src});

    while(!pq.empty()){
        int u = pq.top().second;
        lli d = pq.top().first;
        pq.pop();

        if(d>dist[u]) continue;

        for(auto &x : adj[u]){
            int v = x.first;
            int w = x.second;

            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << i << " : ";
        cout << dist[i];
        cout << endl;
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,e;
    cin >> n >> e;

    vector<vector<pair<int,int>>> adj(n);

    while(e--){
        int u,v,w;
        cin >> u >> v >> w;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    int src;
    cin >> src;

    dijkstra(adj,src,n);

    return 0;
}