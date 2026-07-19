#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vector<int> parent, Rank;

int findParent(int node){
    if(parent[node] == node){
        return node;
    }
    return parent[node] = findParent(parent[node]);
}

void unionSet(int u, int v){
    u  = findParent(u);
    v = findParent(v);

    if(u==v) return;
    
    if(Rank[u] < Rank[v]){
        parent[u] = v;
    }else if(Rank[u]>Rank[v]){
        parent[v] =u;
    }else{
        parent[v] = u;
        Rank[u]++;
    }

}

void kruskalMST(vector<pair<int, pair<int,int>>> &edges, int n){

    sort(edges.begin(), edges.end());
    parent.resize(n);
    Rank.assign(n,0);

    for(int i=0; i<n; i++){
        parent[i] = i;
    }

    int totalCost  = 0;

    for(auto edge : edges){
        int w = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;

        if(findParent(u) != findParent(v)){
            unionSet(u,v);
            cout << u << " - " << v << " : " << w << endl;
            totalCost +=w;
        }
    }
    cout << "Total Cost = " << totalCost << endl;

    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,e;
    cin >> n >> e;

    vector<pair<int, pair<int,int>>> edges;
    while(e--){
        int u,v,w;
        cin >> u >> v >> w;
        edges.push_back({w,{u,v}});
    }
    kruskalMST(edges, n);

    return 0;
}