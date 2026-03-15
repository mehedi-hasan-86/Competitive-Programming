#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int N = 1e5+5;

vi g[N];
int color[N];
bool vis[N];

lli l=0,r =0;
void dfs(int node, int c){
    vis[node] = true;
    color[node] = c;

    if(c==0) l++;
    else r++;

    for(int child : g[node]){
        if(!vis[child]){
            dfs(child, c^1);
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n-1; i++){
        int u,v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0);
    lli ans = l*r-(n-1);

    cout << ans << endl;

    return 0;
}