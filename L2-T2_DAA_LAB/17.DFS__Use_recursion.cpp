#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vector<vector<int>> adj(MAX);
vector<bool> visited(MAX, false);

void dfs(int node){
    visited[node] = true;
    cout << node << " ";

    for(auto child : adj[node]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,e;
    cin >> n >> e;

    while(e--){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  
    }
    dfs(1);

    return 0;
}