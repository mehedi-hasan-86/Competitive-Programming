#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N  = 100000;
vector<vector<int>> adj(N);
vector<bool> visited(N, false);

void bfs(int node){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";

        for(auto a : adj[x]){
            if(!visited[a]){
                visited[a] = true;
                q.push(a);
            }
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
        cin >> u>> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);

    return 0;
}