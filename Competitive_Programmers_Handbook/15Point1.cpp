#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

struct DSU{
    vector<int> parent, rnk;

    DSU(int n){
        parent.resize(n+1);
        rnk.resize(n+1,0);
        for(int i=1; i<=n; i++) parent[i] = i;

    }
    int find_set(int v){
    if(v==parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}

  bool union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a==b) return false;

    if(rnk[a]< rnk[b])  swap(a,b);
    parent[b] = a;
    if(rnk[a]== rnk[b]) rnk[a]++;
    return true;
  }
};

struct Edge{
    int u,v,w;
};




int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<Edge> edges(m);
    for(int i=0; i<m; i++){
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
    sort(edges.begin(), edges.end(), [](auto &a, auto &b){
    return a.w < b.w;});

    DSU dsu(n);
    lli mstWeight = 0;
    vector<Edge> mst;

    for(auto &e : edges){
        if(dsu.union_set(e.u, e.v)){
            mstWeight +=e.w;
            mst.push_back(e);
        }
    }

    cout << mstWeight << endl;

    return 0;
}