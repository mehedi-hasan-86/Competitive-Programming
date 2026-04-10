#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()

int n, m;

vector<vector<int>> g, gr;
vector<int> order;
vector<char> vis;
vector<int> comp;

//----------------------------------------
// literal → index mapping
//----------------------------------------
int lit_index(int x){
    int v = abs(x) - 1;
    return 2*v + (x < 0);
}

//----------------------------------------
// First DFS for order (Kosaraju step 1)
//----------------------------------------
void dfs1(int v){
    vis[v] = 1;
    for(int to : g[v]){
        if(!vis[to]) dfs1(to);
    }
    order.push_back(v);
}

//----------------------------------------
// Second DFS for component (Kosaraju step 2)
//----------------------------------------
void dfs2(int v, int cid){
    comp[v] = cid;
    for(int to : gr[v]){
        if(comp[to] == -1) dfs2(to, cid);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    if(!(cin >> n >> m)) return 0;

    g.assign(2*n, {});
    gr.assign(2*n, {});

    //----------------------------------------
    // Build Implication Graph
    //----------------------------------------
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;

        int A = lit_index(a);
        int B = lit_index(b);

        int notA = A ^ 1;
        int notB = B ^ 1;

        g[notA].push_back(B);
        g[notB].push_back(A);

        gr[B].push_back(notA);
        gr[A].push_back(notB);
    }

    //----------------------------------------
    // Kosaraju Step 1: Order generation
    //----------------------------------------
    vis.assign(2*n, 0);
    for(int i=0; i<2*n; i++){
        if(!vis[i]) dfs1(i);
    }

    //----------------------------------------
    // Kosaraju Step 2: Assign components
    //----------------------------------------
    comp.assign(2*n, -1);
    int cid = 0;

    for(int i = (int)order.size() - 1; i >= 0; i--){
        int v = order[i];
        if(comp[v] == -1){
            dfs2(v, cid++);
        }
    }

    //----------------------------------------
    // Check UNSAT: variable & negation in same SCC
    //----------------------------------------
    for(int i=0; i<n; i++){
        if(comp[2*i] == comp[2*i + 1]){
            cout << "UNSAT\n";
            return 0;
        }
    }

    //----------------------------------------
    // Build solution
    //----------------------------------------
    vector<int> val(n, 0);
    for(int i=0; i<n; i++){
        val[i] = (comp[2*i] > comp[2*i + 1]) ? 1 : 0;
    }

    cout << "SAT\n";
    for(int i=0; i<n; i++){
        if(i) cout << " ";
        cout << val[i];
    }
    cout << endl;

    return 0;
}
