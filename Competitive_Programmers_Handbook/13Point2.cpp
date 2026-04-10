#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 1e5+10;
const lli INF = 1e18;

vector<pair<int,int>> adj[N];
lli dist[N];
bool processed[N];

void dijkstra(int source){
    for(int i=1; i<N; i++){
        dist[i] = INF;
        processed[i] = false;
    }

    priority_queue<pair<lli, int>> pq;

    dist[source] = 0;
    pq.push({0,source});

    while(!pq.empty()){
        int a = pq.top().second;
        pq.pop();

        if(processed[a]) continue;
        processed[a] =  true;

        for(auto u : adj[a]){
            int b = u.first;
            int w = u.second;

            if(dist[a] + w < dist[b]){
                dist[b] =  dist[a] + w;
                pq.push({-dist[b], b});
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >>  n >> m;

    while(m--){
        int a,b,w;
        cin >> a >> b >> w;
        adj[a].push_back({b,w});
    }
    int source;
    cin >> source;

    dijkstra(source);

    for(int i=1; i<=n; i++){
        if(dist[i]==INF) cout <<"INF ";
        else cout <<dist[i] << " ";
    }
    cout << endl;

    return 0;
}