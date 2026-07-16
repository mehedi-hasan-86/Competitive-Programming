#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const lli  INF = 1e18;

void dijkstraAlgo(vector<vector<pair<int,int>>> &adj, int src, int n){
    vector<lli> dist(n,INF);
    dist[src]=0;

    priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,src});

    while(!pq.empty()){
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if(d>dist[u]) continue;

        for(auto x : adj[u]){
            int v = x.first;
            int w = x.second;

            if(dist[u]+w < dist[v]){
                dist[v] = dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << i << " " << dist[i];
        cout << endl;
    }
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

    dijkstraAlgo(adj,src,n);

    return 0;
}