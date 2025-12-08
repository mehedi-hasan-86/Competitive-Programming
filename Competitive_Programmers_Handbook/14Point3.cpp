#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 1e5 + 5;

vector<int> adj[N];
int n;
int maxChild[N];
int maxLength[N];
int up[N];

void dfs1(int node, int parent){
    maxChild[node] = 0;

    for(int child : adj[node]){
        if(child ==  parent) continue;
        dfs1(child, node);
        maxChild[node] = max(maxChild[node], 1 + maxChild[child]);
    }
}

void dfs2(int node, int parent){
    int mx1 = -1, mx2 = -1;

    for(int child : adj[node]){
        if(child == parent) continue;
        int len = 1 + maxChild[child];
        if(len>mx1){
            mx2 = mx1;
            mx1 = len;
        }else if(len> mx2){
            mx2 = len;
        }
    }
    maxLength[node] = max(maxChild[node], up[node]);

    for(int child : adj[node]){
        if(child == parent) continue;
        int use = (1 + maxChild[child] == mx1) ? mx2 : mx1;
        up[child] = max(up[node] + 1, use +1);
        dfs2(child, node);
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

   cin >> n;

   for(int i=0; i<n-1; i++){
    int u,v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
   }

   dfs1(1,0);
   up[1] = 0;
   dfs2(1,0);

   for(int i=1; i<=n; i++){
    cout <<"Longest path from node " << i << " = " << maxLength[i]  << endl;
   }

    return 0;
}