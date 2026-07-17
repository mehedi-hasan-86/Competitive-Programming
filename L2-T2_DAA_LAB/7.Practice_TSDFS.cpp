#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, stack<int> &st){

    visited[node] = true;
    for(auto child : adj[node]){
        if(!visited[child]){
            dfs(child, adj, visited,st);
        }
    }
    st.push(node);
}

void TopoSortDFS(vector<vector<int>> &adj, int n){
    
    vector<bool> visited(n, false);
    stack<int> st;

    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i,adj, visited, st);
        }
    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,e;
    cin >> n >> e;

    vector<vector<int>> adj(n);
    while(e--){
        int u,v;
        cin>> u >> v;
        adj[u].push_back(v);
    }

    TopoSortDFS(adj,n);

    return 0;
}