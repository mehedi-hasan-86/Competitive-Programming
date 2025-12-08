#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int INF = 1e9;

struct Edge{
    int u,v,w;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<Edge> edges(m);

    for(int i=0; i<m; i++){
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    int start;
    cin >> start;

    vector<int>distance(n+1, INF);
    distance[start] = 0;

    //Bellman-Ford
    for(int i=1; i<=n-1; i++){
        for(auto e : edges){
           if( distance[e.u] != INF && distance[e.u] + e.w < distance[e.v] ){
            distance[e.v] = distance[e.u] + e.w;
           }
        }
    }

    //Negative cycle check

    bool negativeCycle = false;
    for(auto e : edges){
        if(distance[e.u] != INF && distance[e.u] + e.w < distance[e.v]){
            negativeCycle= true;
            break;
        }
    }

    if(negativeCycle) cout << "Graph contains a negative cycle\n";
    else{
        for(int i=1; i<=n; i++){
            if(distance[i] == INF) cout <<"Node " << i << " :  INF\n";
            else cout << "Node " << i << " : " << distance[i] << endl;
        }
    }

    return 0;
}