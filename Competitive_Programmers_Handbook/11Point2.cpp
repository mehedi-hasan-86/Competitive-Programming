#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 100;
int adj[N][N];

vector<pair<int,int>> edges;

void addEdge(int u,int v){
    edges.push_back({u,v});
}

// void addEdge(int u, int v){
//     adj[u][v] = 1;
//     adj[v][u] = 1;
//     // adj[u].push_back(v);
//     // adj[v].push_back(u);
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 4;
    addEdge(1,2);
    addEdge(2,3);
    addEdge(2,4);
    addEdge(3,4);
    addEdge(4,1);


    cout << "Edge List: \n";
    for(auto e : edges){
        cout << e.first << " -> " << e.second << endl;
    }

    // cout << "Adjacney List : ";
    // for(int i=1; i<=n; i++){
    //     cout <<"Node "<< i << " : ";
    //     for(int v : adj[i]) cout << v << " ";
    //     cout << endl;
    // }

    // cout <<"Adjacenty Matrix : ";
    // cout << endl;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}