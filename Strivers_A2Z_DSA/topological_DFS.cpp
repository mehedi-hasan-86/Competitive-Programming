#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;

const int N = 100005;
vector<int> adj[N];
vector<bool> vis;

vi topoSort(int v){
    stack<int> st,topo;
    
    for(int i=0; i<v; i++){
        if(!vis[i]){
            st.push(i);
            vis[i] = true;
            
            while(!st.empty()){
                int u = st.top();

                bool hasUnvisited = false;
                for(int m : adj[u]){
                    if(!vis[m]){
                        st.push(m);
                        vis[m] = true;
                        hasUnvisited = true;
                    }
                }
                if(hasUnvisited) continue;
                st.pop();
                topo.push(u);

            }

        }
    }
    vi ans;
    while(!topo.empty()){
        ans.push_back(topo.top());
        topo.pop();
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int v, e;
    cin >> v >> e;

    vis.assign(v,false);

    for(int i=0; i<e; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vi res = topoSort(v);

    for(int x : res) cout << x << " ";
    cout << endl;

    

    

    return 0;
}