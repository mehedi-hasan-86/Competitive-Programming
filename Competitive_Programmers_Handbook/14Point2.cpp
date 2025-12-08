
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N  = 1e5 + 5;
vector<int> adj[N];
int n;

pair<int,int> dfs(int node, int parent){
    pair<int,int> farthest = {0,node};

    for(int child : adj[node]){
        if(child == parent) continue;

        pair<int,int> res = dfs(child, node);
        res.first +=1;

        if(res.first > farthest.first){
              farthest = res;
        }
    }
    return farthest;
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
    pair<int,int> first = dfs(1,0);
    int far_node = first.second;

    pair<int,int> second = dfs(far_node,0);

    cout <<"Diameter of the tree = " << second.first << endl;


    return 0;
}