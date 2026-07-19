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

struct  Edge{
 int u,v,w;
};

void bellmanFord(vector<Edge> &edges, int src, int n){
    vector<lli> dist(n, INF);
    dist[src] = 0;

    for(int k=1; k<=n-1; k++){

        bool update = false;
        for(auto &e : edges){
            if(dist[e.u] != INF && dist[e.u] + e.w < dist[e.v]){
                dist[e.v] = dist[e.u] + e.w;
                update = true;
            }
        }
        if(!update) break;
    }

    for(auto &e : edges){
            if(dist[e.u] != INF && dist[e.u] + e.w < dist[e.v]){
              cout <<"Negative Cycle Detected\n";
              return;
            }
    }

    for(int i=0; i<n; i++){
        cout << i << " : ";
        cout << dist[i];
        cout << endl;
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

    bellmanFord(edges,src,n);



    return 0;
}