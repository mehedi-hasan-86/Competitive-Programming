#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int timer = 0;

void tarjanDFS(int node, vector<vector<int>> &adj, vector<int> &disc, vector<int> &low, vector<bool> &inStack, stack<int> &st){
    disc[node] = low[node] = timer++;
    st.push(node);
    inStack[node] = true;

    for(auto child : adj[node]){
        if(disc[child]==-1){
            tarjanDFS(child, adj, disc, low, inStack, st);
            low[node] = min(low[node], low[child]);
        }else if(inStack[child]){
            low[node] = min(low[node], disc[child]);
        }
    }

    if(low[node]==disc[node]){
        cout <<"SCC: ";

        while(true){
            int u = st.top();
            st.pop();
            inStack[u] = false;

            cout << u << " ";

            if(u==node){
                break;
            }
        }
        cout << endl;
    }
}

void TarjanSCC(vector<vector<int>> &adj, int n){

    vector<int> disc(n,-1);
    vector<int> low(n,-1);
    vector<bool> inStack(n, false);

    stack<int> st;
    for(int i=0; i<n; i++){
        if(disc[i]==-1){
            tarjanDFS(i,adj,disc,low,inStack,st);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,e;
    cin >> n >> e;

    vector<vector<int>> adj(n);

    while(e--){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    TarjanSCC(adj,n);



    return 0;
}