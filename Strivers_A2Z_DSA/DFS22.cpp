#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 1e5;
vector<int> graph[N];
vector<bool>visited(N, false);

void dfs(int start){
    stack<int> st;
    st.push(start);
    visited[start]= true;

    while(!st.empty()){
        int u = st.top();
        cout << u << " ";
        st.pop();

        for(int v : graph[u]){
            if(!visited[v]){
            st.push(v);
            visited[v] = true;

            }

        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int v,e;
    cin >> v >> e;

    for(int i=0; i<e; i++){
        int a,b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);

    }
    dfs(1);


    return 0;
}