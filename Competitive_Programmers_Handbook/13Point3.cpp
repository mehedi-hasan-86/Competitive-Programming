#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const lli INF = 1e18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    vector<vector<lli>> dist(n+1, vector<lli>(n+1, INF));

    for(int i=1; i<=n; i++){
        dist[i][i] = 0;
    }
    
    while(m--){
        int a,b,w;
        cin >> a >> b >> w;
        dist[a][b] = min(dist[a][b], (lli)w);
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(dist[i][k] < INF &&  dist[k][j] < INF)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(dist[i][j] == INF) cout <<"INF ";
            else cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}