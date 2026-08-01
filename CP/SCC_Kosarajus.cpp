#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void dfs1(int node, vector<bool> &visited, vector<vector<int>> &adj, stack<int> &st){
     visited[node] = true;
     for(auto child : adj[node]){
        if(!visited[child]){
            dfs1(child, visited, adj,st);
        }
     }
     st.push(node);
}

void dfs2(int node, vector<bool> &visited, vector<vector<int>> &trans){
        visited[node] = true;
        cout << node << " ";
        for(auto child : trans[node]){
            if(!visited[child]){
                dfs2(child, visited, trans);
            }
        }
}

void SCC_Kosaraju(vector<vector<int>> &adj, int n){

    vector<bool> visited(n,false);
    stack<int> st;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs1(i, visited, adj, st);
        }
    }
    vector<vector<int>> trans(n);
    for(int i=0; i<n; i++){
        for(auto child : adj[i]){
            trans[child].push_back(i);
        }
    }
    fill(visited.begin(), visited.end(), false);
    
    while(!st.empty()){
        int u = st.top();
        st.pop();

        if(!visited[u]){
            cout <<"SCC :";
            dfs2(u, visited, trans);
            cout << endl;

        }
    }
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
    SCC_Kosaraju(adj, n);

    return 0;
}