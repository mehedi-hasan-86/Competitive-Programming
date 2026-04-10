#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    // int adj[n+1][m+1];
    // for(int i=0; i<m; i++){
    //     int u, v;
    //     cin >> u >> v;

    //     adj[u][v] = 1;
    //     adj[v][u] = 1;

    // }

    vector<int> adj[n+1];
    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }



    return 0;
}