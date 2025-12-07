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

vector<int> graph[N];
bool visited[N];

void addEdge(int a, int b){
    graph[a].push_back(b);
    graph[b].push_back(a);
}


void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout << u << " ";

        for(int v :  graph[u]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        addEdge(a,b);
    }

    memset(visited, false, sizeof(visited));
    bfs(1);
    cout << endl;


    return 0;
}