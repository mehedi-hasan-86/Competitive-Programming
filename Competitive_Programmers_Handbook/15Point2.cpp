#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;


const int MAX = 1e5 + 5;

int link[MAX];
int sizeSet[MAX];

int find_set(int x){
    while(x != link[x]) x = link[x];
    return x;
}

bool same_set(int a, int b){
    return find_set(a) == find_set(b);
}

void unite(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a==b) return;

    if(sizeSet[a] < sizeSet[b]) swap(a,b);
    sizeSet[a] +=sizeSet[b];
    link[b] = a;
}

struct Edge{
    int u,v,w;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        link[i] = i;
        sizeSet[i] = 1;
    }
    vector<Edge> edges(m);
    for(int i=0; i<m; i++){
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    sort(edges.begin(), edges.end(), [](Edge &a, Edge &b){
        return a.w < b.w;
    });
    lli mstWeight = 0;
    vector<Edge> mstEdges;

    for(auto &e : edges){
        if(!same_set(e.u , e.v)){
            unite(e.u, e.v);
            mstWeight +=e.w;
            mstEdges.push_back(e);
        }
    }

    cout << mstWeight << endl;
    for(auto &e : mstEdges){
       cout << e.u << " " << e.v << " " << e.w << endl;
    }

    return 0;
}