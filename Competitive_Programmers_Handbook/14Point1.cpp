#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 1e5;
vector<int> adj[N];
int countSub[N];

void dfs(int s, int parent){
    countSub[s] = 1;

    for(int u : adj[s]){
        if(u == parent) continue;

        dfs(u,s);
        countSub[s] += countSub[u];
    }
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n-1; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int root = 1;
    dfs(root,0);

    for(int i=1; i<=n; i++){
        cout <<"Subtree size of node " << i << " = " << countSub[i] << endl;
    }

    return 0;
}