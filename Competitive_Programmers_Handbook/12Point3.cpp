#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 1e5 + 10;
vector<int>graph[N];
bool visited[N];

//-------------------------
// Add Undirected Edge
//------------------------

void addEdge(int a, int b){
    graph[a].push_back(b);
    graph[b].push_back(a);
}

//------------------------
// DFS (Recursive)
//------------------------
void dfs(int start){
    visited[start] = true;
    cout << start << " ";

    for(int v : graph[start]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

//--------------------------
// DFS (Iterative)
//-------------------------

void dfs_stack(int start){
    stack<int> st;
    st.push(start);
    visited[start] = true;

    while(!st.empty()){
        int u = st.top();
        st.pop();
        cout << u << " ";

        for(int v : graph[u]){
            if(!visited[v]){
                visited[v] = true;
                st.push(v);
            }
        }
    }
}


//--------------------------
// BFS (Iterative)
//--------------------------

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout << u << " ";

        for(int v : graph[u]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
//--------------------------------
// Connected Components
//--------------------------------

int connectedComponents(int n){
    memset(visited, false, sizeof(visited));
    int comp = 0;

    for(int i=1; i<=n; i++){
        if(!visited[i]){
            comp++;
            cout << comp << " : ";
            dfs(i);
            cout << endl;
        }
    }
    return comp;
}
//-----------------------------
// Cycle Detection (Undirected)
//-----------------------------
bool detectCycle(int u, int parent){
    visited[u] = true;

    for(int v : graph[u]){
        if(!visited[v]){
            if(detectCycle(v,u)) return true;
        }else if(v != parent) return true;
    }
    return  false;
}

bool hasCycle(int n){
    memset(visited, false, sizeof(visited));
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            if(detectCycle(i, -1)) return true;
        }
    }
    return false;
}

bool isBipartite(int n){
    vector<int> color(n+1, -1);

    for(int start = 1; start<=n; start++){
        if(color[start]==-1){
            queue<int> q;
            q.push(start);
            color[start] = 0;

            while(!q.empty()){
                int u = q.front();
                q.pop();

                for(int v : graph[u]){
                    if(color[v] == -1){
                        color[v] = color[u]^1;
                        q.push(v);
                    }else if(color[v] == color[u]){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

//----------------------
// Main Function
//----------------------

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
    dfs(1);
    cout << endl;

    memset(visited, false, sizeof(visited));
    dfs_stack(1);
    cout << endl;

    memset(visited, false, sizeof(visited));
    bfs(1);
    cout << endl;

    int totalComponents = connectedComponents(n);
    cout << "Total Components : " << totalComponents << endl;

    if(hasCycle(n)) cout <<"Contais a cycle\n";
    else cout << "Does not contain a cycle\n";


    if(isBipartite(n)) cout <<"Graph is Bipartite.\n";
    else cout <<"Graph is NOT Bipartite.\n";



    return 0;
}