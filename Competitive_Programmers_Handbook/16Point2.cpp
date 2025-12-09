#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int INF = 1e18;

vector<vector<int>> adj;
vector<int> topo;
vector<int> paths;
vector<int> visited;
bool hasCycle = false;

void dfs(int u){
    visited[u] = 1;
    for(int v : adj[u]){
        if(visited[v] == 0) dfs(v);
        else if (visited[v] == 1) hasCycle = true;
    }
    visited[u] = 2;
    topo.push_back(u);
}

int countPathsDAG(int n, int start, int end){
    topo.clear();
    visited.assign(n+1, 0);
    hasCycle = false;
    for(int i=1; i<=n; i++){
        if(!visited[i]) dfs(i);
    }
    if(hasCycle) return -1;

    reverse(topo.begin(), topo.end());
    paths.assign(n+1, 0);
    paths[start] =1;

    for(int u : topo){
        for(int v : adj[u]){
            paths[v] +=paths[u];
        }
    }
    return paths[end];
}

struct Edge {
    int to, w;

};
vector<vector<Edge>> g;

pair<vector<int>, vector<int>> dijkstra(int n, int start){
    vector<int> dist(n+1, INF);
    vector<int> count(n+1, 0);
    dist[start] = 0;
    count[start] = 1;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0, start});

    while(!pq.empty()){
        pair<int,int> top = pq.top();
        int d = top.first;
        int u = top.second;
        pq.pop();
        if(d != dist[u]) continue;
        for(auto &e : g[u]){
            int v = e.to, w = e.w;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                count[v] =  count[u];
                pq.push({dist[v], v});
            }else if(dist[v] == dist[u] + w){
                count[v] +=count[u];
            }
        }
    }
    return {dist, count};
}

int coinChangeDP(int n, vector<int> &coins){
    vector<int> dp(n+1, INF);

    dp[0] = 0;
    for(int i=1; i<=n; i++){
        for(int c : coins){
            if(i-c >= 0){
                dp[i] = min(dp[i], dp[i-c]+1);
            }
        }
    }
    return dp[n];
}

int countCoinWays(int n , vector<int> &coins){
    vector<int> ways(n+1, 0);
    ways[0] = 1;
    for(int c : coins){
        for(int i = c; i<=n; i++){
            ways[i] +=ways[i-c];
        }
    }
    return ways[n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 6, m = 6;
    adj.assign(n+1, {});
    adj[1] = {2,4};
    adj[2] = {3};
    adj[3] = {6};
    adj[4] = {5};
    adj[5] = {2,3};
 
    cout << countPathsDAG(n,1,6) << endl;

    g.assign(n+1, {});
    g[1].push_back({2,1});
    g[1].push_back({3,2});
    g[2].push_back({4,1});
    g[3].push_back({4,1});

    pair<vector<int>, vector<int>> res = dijkstra(n,1);
    vector<int> dist = res.first;
    vector<int> count = res.second;

    cout << count[4] << endl;

    vector<int> coins = {1,3,4};
    int target = 6;
    
    cout << coinChangeDP(target , coins) << endl;
    cout << countCoinWays(target, coins) << endl;

    return 0;
}