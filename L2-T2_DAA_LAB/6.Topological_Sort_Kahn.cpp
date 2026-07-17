#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void kahnToopoSort(vector<vector<int>> &adj, int n){

    vector<int> indegree(n,0);

    for(int i=0; i<n; i++){
        for(auto child : adj[i]){
            indegree[child]++;
        }
    }

    queue<int> q;
    for(int i=0; i<n; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    vector<int> topoOrder;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        topoOrder.push_back(node);

        for(auto child : adj[node]){
            indegree[child]--;
            if(indegree[child]==0){
                q.push(child);
            }
        }

    }

    if(topoOrder.size() != n){
        cout << "Graph contains a cycle." << endl;
        return;
    }
    cout << "Topological Order: "<< endl;
    for(auto node : topoOrder){
        cout << node << " ";
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
        cin >> u >> v;

        adj[u].push_back(v);
    }
    kahnToopoSort(adj,n);

    return 0;
}