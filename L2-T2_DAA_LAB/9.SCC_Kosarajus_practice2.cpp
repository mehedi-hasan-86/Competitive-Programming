#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void dfs1(vector<vector<int>> &adj, int node, vector<bool> &visited, stack<int> &st){
    visited[node] = true;
    for(auto v : adj[node]){
        if(!visited[v]){
            dfs1(adj, v, visited, st);
        }
    }
    st.push(node);
}

void dfs2(vector<vector<int>> &trans,vector<bool> & visited, int node){
    visited[node] = true;
    cout << node << " ";
    for(auto v : trans[node]){
        if(!visited[v]){
            dfs2(trans, visited, v);
        }
    }
}

void Kosarajus_SCC(vector<vector<int>> &adj, int n){
    vector<bool> visited(n, false);
    stack<int> st;

    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs1(adj, i, visited, st);
        }
    }

    vector<vector<int>> trans(n);
    for(int i=0; i<n; i++){
        for(auto v : adj[i]){
            trans[v].push_back(i);
        }
    }
    fill(visited.begin(), visited.end(), false);

    int cnt = 0;
    while(!st.empty()){
        int node = st.top();
        st.pop();

        if(!visited[node]){
            cout << "SCC: ";
            cnt++;
            dfs2(trans, visited, node);
            cout << endl;
        }
    }
    cout << cnt << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n,e;
    cin >> n >> e;

    vector<vector<int>> adj(n);
    while(e--){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    Kosarajus_SCC(adj, n);

    return 0;
}