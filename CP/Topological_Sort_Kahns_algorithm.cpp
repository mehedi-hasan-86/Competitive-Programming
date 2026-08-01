#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void topo_Kahns(vector<vector<int>> &adj, int n){
     vector<int> indegree(n,0);
     for(int i=0; i<n; i++){
        for(auto x : adj[i]){
            indegree[x]++;
        }
     }


     queue<int> q;
     for(int i=0; i<n ; i++){
        if(indegree[i]==0){
            q.push(i);
        }
     }
     vi topoOrder;
     while(!q.empty()){
        int u = q.front();
        q.pop();

        topoOrder.push_back(u);
        for(auto x : adj[u]){
            indegree[x]--;
            if(indegree[x]==0){
                q.push(x);
            }
        }
     }
     if(topoOrder.size() != n){
        cout  << "Cycle Detected\n";
        return;
     }
     for(auto m : topoOrder){
        cout << m << " ";
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
    topo_Kahns(adj,n);

    return 0;
}