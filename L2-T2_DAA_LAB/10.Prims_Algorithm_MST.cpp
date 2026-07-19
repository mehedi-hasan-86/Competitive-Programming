#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void primMST(vector<vector<pair<int,int>>> &adj, int n){

    vector<int> parent(n,-1);
    vector<bool> inMST(n, false);
    vector<int> key(n, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    pq.push({0,0}); // {weight, vertex}
    key[0] = 0;
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();

        if(inMST[u]) continue;
        inMST[u] = true;

        for(auto edge : adj[u]){
            int v = edge.first;
            int w = edge.second;

            if(!inMST[v] && w<key[v]){
                key[v] = w;
                parent[v]  = u;
                pq.push({key[v],v});
            }
        }

    }
    int totalCost = 0;
    for(int i=1; i<n; i++){
        cout << parent[i] << " - " << i << " : " << key[i] << endl;
        totalCost += key[i];
    }
    cout << totalCost << endl;
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

    primMST(adj, n);




    return 0;
}