#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'

const int N  = 1e5+5;
int n,m;
int cat[N];
vi adj[N];
int ans = 0;

void dfs(int u, int parent, int cnt){
    if(cat[u]==1){
        cnt++;
    }else{
        cnt = 0;
    }

    if(cnt>m) return;
    bool isLeaf  = true;
    for(int v : adj[u]){
        if(v != parent){
            isLeaf = false;
            dfs(v,u,cnt);
        }
    }
    if(isLeaf) ans++;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> cat[i];
    }

    for(int i=1; i<n; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0,0);

    cout << ans << endl;

    

    return 0;
}