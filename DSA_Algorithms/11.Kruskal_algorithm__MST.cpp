#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

vector<int> parent;
vector<int> Rank;

int findParent(int x){
    if(parent[x]==x) return x;

    return parent[x]=findParent(parent[x]);
}

void unionSet(int a, int b){
    a = findParent(a);
    b = findParent(b);

    if(a != b){
        if(Rank[a] < Rank[b]) swap(a,b);

        parent[b] = a;

        if(Rank[a]==  Rank[b]) Rank[a]++;
    }
}

void kruskalMST(vector<pair<int,pair<int,int>>> &edges, int n){
    sort(edges.begin(), edges.end());
    parent.resize(n);
    Rank.assign(n,0);

    for(int i=0; i<n; i++){
        parent[i] = i;
    }
    int totalCost = 0;
    for(auto edge : edges){
        int w = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;

        if(findParent(u) != findParent(v)){
            unionSet(u,v);
            cout << u << " - " << v << " : " << w << endl;
            totalCost += w;
        }
    }
    cout << "Total Cost = " << totalCost << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,e;
    cin >> n >> e;

    vector<pair<int,pair<int,int>>> edges;
    while(e--){
        int u,v,w;
        cin >> u >> v >> w;
        edges.push_back({w,{u,v}});
    }
    kruskalMST(edges, n);

    return 0;
}