#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vector<vector<int>> graph1, graphRev;
vector<bool> visited;
vector<int> order;
vector<vector<int>> SCCs;

int n,m;

void dfs1(int node){
    visited[node] = true;
    for(int next : graph1[node]){
        if(!visited[next])
        dfs1(next);
    }
    order.push_back(node);
}

void dfs2(int node, vector<int> &component){
    visited[node] = true;
    component.push_back(node);

    for(int next : graphRev[node]){
        if(!visited[next]){
            dfs2(next, component);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    graph1.assign(n+1, {});
    graphRev.assign(n+1, {});
    visited.assign(n+1, false);

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        graph1[u].push_back(v);
        graphRev[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs1(i);
        }
    }
    fill(visited.begin(), visited.end(), false);

    reverse(order.begin(), order.end());

    for(int node : order){
        if(!visited[node]){
            vector<int> component;
            dfs2(node, component);
            SCCs.push_back(component);
        }
    }
    cout << SCCs.size() << endl;

    int id = 1;
    for(auto &comp : SCCs){
        cout << id++ << endl;
        for(int x : comp) cout << x << " ";
        cout << endl;
    }
    return 0;
}