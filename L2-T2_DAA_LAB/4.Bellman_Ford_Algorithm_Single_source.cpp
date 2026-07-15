#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;



struct Edge{
    int u,v,w;
};

void bellmanFord(vector<Edge> &edges, int n, int src){
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;

    for(int i=1; i<=n-1; i++){
        for(auto e : edges){
            if(dist[e.u] != INT_MAX && dist[e.u] + e.w < dist[e.v]){
                dist[e.v] = dist[e.u] + e.w;
            }
        }
    }

    for(auto e : edges){
        if(dist[e.u]  != INT_MAX && dist[e.u] + e.w < dist[e.v]){
            cout <<"Negative Weight Cycle Found\n";
            return;
        }
    }
    cout <<"Shortest Distance:\n";
    for(int i=0; i<n; i++){
        cout << i << " : " << dist[i] << endl;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,e;
    cin >> n >> e;

    vector<Edge> edges;

    while(e--){
        int u,v,w;
        cin >> u >> v >> w;
        edges.push_back({u,v,w});
    }
    int src;
    cin >> src;

    bellmanFord(edges,n, src);

    return 0;
}