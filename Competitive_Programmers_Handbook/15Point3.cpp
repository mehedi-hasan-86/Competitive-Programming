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
    int to, weight;
};

using pii = pair<int,int>;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<Edge>> adj(n+1);

    for(int i=0; i<m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<bool> inMST(n+1, false);
    vector<int> parent(n+1, -1);
    vector<int> key(n+1, INT_MAX);

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    int start = 1;
    pq.push({0, start});
    key[start] = 0;

    lli mstWeight = 0;

    while(!pq.empty()){
        
        pii top = pq.top();
        int w = top.first;
        int u = top.second;
        pq.pop();

        if(inMST[u]) continue;

        inMST[u] = true;
        mstWeight += w;

        for(auto &e : adj[u]){
            int v = e.to;
            int weight = e.weight;

            if(!inMST[v] && weight < key[v]){
                key[v] = weight;
                pq.push({weight, v});
                parent[v] = u; 
            }
        }
    }

    cout << "MST Weight: " << mstWeight << endl;
    for(int i=1; i<=n; i++){
        if(parent[i] != -1){
            cout << parent[i] << " " << i << endl;
        }
    }

    return 0;
}
