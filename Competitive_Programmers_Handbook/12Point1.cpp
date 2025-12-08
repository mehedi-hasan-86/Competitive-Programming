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

int visited[N];

void addEdge(int a, int b){
    graph[a].push_back(b);
    graph[b].push_back(a);
}

//dfs stack

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


// recursive 
// void dfs(int start){
//     visited[start] = true;
//     cout << start << " ";

//     for(int v : graph[start]){
//         if(!visited[v]){
//             dfs(v);
//         }
//     }
// }

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
    dfs_stack(1);





    return 0;
}