#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Fenwick {
    int n;
    vector<ll> bit;
    Fenwick(int n=0){ init(n); }
    void init(int _n){
        n = _n;
        bit.assign(n+1, 0);
    }
    void add(int i, ll val){
        for(; i<=n; i += i&-i) bit[i] += val;
    }
    ll sum(int i){
        ll s=0;
        for(; i>0; i -= i&-i) s += bit[i];
        return s;
    }
    ll range_sum(int l, int r){
        if(l>r) return 0;
        return sum(r) - sum(l-1);
    }
};

int N, LOG;
vector<vector<int>> g;
vector<int> parent0;  
vector<vector<int>> up;    
vector<int> depthv;
vector<int> tin, tout, subsz;
int timer_;
vector<ll> val;  
vector<ll> init_pathsum; 

Fenwick bit_val, bit_diff;


void dfs(int u, int p){
    parent0[u] = p;
    up[0][u] = (p==-1?0:p);
    tin[u] = ++timer_;
    subsz[u] = 1;
    if(p == -1) depthv[u] = 0, init_pathsum[u] = val[u];
    else {
        depthv[u] = depthv[p] + 1;
        init_pathsum[u] = init_pathsum[p] + val[u];
    }

    for(int v: g[u]){
        if(v==p) continue;
        dfs(v, u);
        subsz[u] += subsz[v];
    }
    tout[u] = timer_;
}


void build_lifting(){
    LOG = 1;
    while((1<<LOG) <= N) LOG++;
    up.assign(LOG, vector<int>(N+1, 0));
    for(int k=1; k<LOG; ++k){
        for(int v=1; v<=N; ++v){
            int mid = up[k-1][v];
            up[k][v] = (mid==0 ? 0 : up[k-1][mid]);
        }
    }
}
int kth_ancestor(int v, int k){
    if(v==0) return 0;
    for(int b=0; b<LOG && v!=0; ++b){
        if(k & (1<<b)){
            v = up[b][v];
        }
    }
    return v; 
}

int lca(int a, int b){
    if(a==0 || b==0) return a^b;
    if(depthv[a] < depthv[b]) swap(a,b);
    int diff = depthv[a] - depthv[b];
    a = kth_ancestor(a, diff);
    if(a == b) return a;
    for(int k=LOG-1; k>=0; --k){
        if(up[k][a] != up[k][b]){
            a = up[k][a];
            b = up[k][b];
        }
    }
    return parent0[a];
}

void range_add(Fenwick &bit, int l, int r, ll x){
    if(l>r) return;
    bit.add(l, x);
    if(r+1 <= bit.n) bit.add(r+1, -x);
}

void initialize(int root = 1){
    timer_ = 0;
    tin.assign(N+1,0);
    tout.assign(N+1,0);
    subsz.assign(N+1,0);
    parent0.assign(N+1, -1);
    depthv.assign(N+1,0);
    init_pathsum.assign(N+1,0);

    dfs(root, -1);
    build_lifting();

    bit_val.init(N+5);
    bit_diff.init(N+5);

    for(int v=1; v<=N; ++v){
        bit_val.add(tin[v], val[v]);
    }

    for(int v=1; v<=N; ++v){

        range_add(bit_diff, tin[v], tin[v], init_pathsum[v]);
    }
}

void update_node_value(int u, ll new_value){
    ll delta = new_value - val[u];
    if(delta == 0) return;
    val[u] = new_value;
    bit_val.add(tin[u], delta);
    range_add(bit_diff, tin[u], tin[u] + subsz[u] - 1, delta);
}

ll query_subtree_sum(int u){
    return bit_val.range_sum(tin[u], tin[u] + subsz[u] - 1);
}
ll query_path_root(int v){
    return bit_diff.sum(tin[v]);
}

int distance_nodes(int a, int b){
    int c = lca(a,b);
    if(c==0) return -1; 
    return depthv[a] + depthv[b] - 2*depthv[c];
}
int ancestor(int v, int k){
    return kth_ancestor(v, k);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Q;
    if(!(cin >> N >> Q)) {
        cerr << "Input: N Q expected\n";
        return 0;
    }
    g.assign(N+1, {});
    for(int i=0;i<N-1;i++){
        int u,v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    val.assign(N+1, 0);
    for(int i=1;i<=N;i++) cin >> val[i];

    initialize(1);

    while(Q--){
        int type; cin >> type;
        if(type == 1){
            int u; ll x; cin >> u >> x;
            update_node_value(u, x);
        } else if(type == 2){
            int u; cin >> u;
            cout << query_subtree_sum(u) << "\n";
        } else if(type == 3){
            int v; cin >> v;
            cout << query_path_root(v) << "\n";
        } else if(type == 4){
            int a,b; cin >> a >> b;
            cout << lca(a,b) << "\n";
        } else if(type == 5){
            int a,b; cin >> a >> b;
            cout << distance_nodes(a,b) << "\n";
        } else if(type == 6){
            int v; int k; cin >> v >> k;
            cout << ancestor(v, k) << "\n";
        } else {
            cerr << "Unknown query type " << type << "\n";
        }
    }
    return 0;
}
