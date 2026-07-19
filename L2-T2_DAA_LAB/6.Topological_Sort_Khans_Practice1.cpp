#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void kahns(vector<vector<int>> &adj, int n){

    vector<int> indegree(n,0);
    for(int i=0; i<n; i++){
        for(int v : adj[i]){
            indegree[v]++;
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
        int x = q.front();
        q.pop();
        topoOrder.push_back(x);

        for(auto m : adj[x]){
            indegree[m]--;
            if(indegree[m]==0){
                q.push(m);
            }
        }
    }

    if(topoOrder.size() != n){
        cout << "Graph has cycle\n";
        return;
    }


    for(int i=0; i<n; i++){
        cout << topoOrder[i] << " ";
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

    kahns(adj,n);

    return 0;
}