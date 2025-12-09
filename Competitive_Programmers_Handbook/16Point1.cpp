#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vector<vector<int>> adj;
vector<int> state;
vector<int>  topo;
bool hasCycle = false;

void dfs(int u){
    state[u] = 1;

    for(int v : adj[u]){
        if(state[v] == 0){
            dfs(v);
        }else if(state[v] ==1){
            hasCycle = true;
            return;
        }
    }
    state[u] = 2;
    topo.push_back(u);
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    adj.assign(n+1, {});
    state.assign(n+1,0);

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    for(int i=1; i<=n;  i++){
        if(state[i] ==0){
            dfs(i);
        }
    }
    if(hasCycle){
        cout <<"Cycle detected! Topological srot not possible.\n";
        return 0;
    }

    reverse(topo.begin(), topo.end());

    for(int x : topo){
        cout << x << " ";
    }
    cout << endl;


    return 0;
}