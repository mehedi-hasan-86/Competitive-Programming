#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void floydWarshall(vector<vector<int>> &graph, int n){
    vector<vector<int>> dist = graph;

    for(int k = 0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(dist[i][k] != INT_MAX && dist[k][j] != INT_MAX ){
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    cout <<"Shortes Distance Matrix: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(dist[i][j] == INT_MAX) cout <<"INF ";
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

    vector<vector<int>> graph(n, vector<int> (n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> graph[i][j];

            if(graph[i][j]==-1){
                graph[i][j] = INT_MAX;
            }
        }
       
    }
    floydWarshall(graph, n);

    return 0;
}