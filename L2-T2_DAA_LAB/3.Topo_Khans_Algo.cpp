#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m,n;
    cin >> m >> n;

    vi a[n];

    vi ind(n,0);

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        a[u].push_back(v);
        ind[v]++;
    }

    queue<int> q;
    for(int i=0; i<n; i++){
        if(ind[i]==0){
            q.push(i);
        }
    }

    vi topo;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        topo.push_back(u);

        for(auto ed : a[u]){
            ind[ed]--;
            if(ind[ed]==0){
                q.push(ed);
            }
        }
    }

    for(auto x : topo){
        cout << x << " ";
    }
    cout << endl;



    return 0;
}