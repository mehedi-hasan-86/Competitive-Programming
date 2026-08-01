#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void floyd_warshall(vector<vector<int>> &graph, int n){

    vector<vector<int>> dist = graph;
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
        if(dist[i][k]==INT_MAX) continue;
        for(int j=0; j<n; j++){
            if(dist[k][j]==INT_MAX) continue;
            dist[i][j] = min(dist[i][j], dist[i][k]+ dist[k][j]);
        }
      }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(dist[i][j]==INT_MAX) cout <<"INF ";
            else cout << dist[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        int x;
        cin >> x;
        if(x==-1) graph[i][j] = INT_MAX;
        else if(i==j) graph[i][j] = 0;
        else graph[i][j] = x;
        }
    }
    floyd_warshall(graph,n);

    return 0;
}