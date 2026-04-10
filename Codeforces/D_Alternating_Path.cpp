#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int N = 2e5 + 5;
vi g[N];
bool vis[N];
int color[N];
bool isBip;
int l,r;

void dfs(int node, int c){
    vis[node] = true;
    color[node] = c;
    if(c==0) l++;
    else r++;

    for(int ch : g[node]){
        if(!vis[ch]) dfs(ch,c^1);
        else if(color[ch]==color[node]) isBip = false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            g[i].clear(); vis[i] = false;
        }
        for(int i=0; i<m; i++){
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int ans = 0;
        for(int i=1; i<=n; i++){
            if(!vis[i]){
                isBip = true;
                l=r=0;
                dfs(i,0);
                if(isBip) ans +=max(l,r);
            }
        }
        cout << ans << endl;
    }
    return 0;
}