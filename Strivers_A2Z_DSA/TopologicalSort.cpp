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

void topoDFS(int start){
    
    stack<int> st;
    st.push(start);

    while(!st.empty()){
        int u = st.top();

        
    }

    for(int v: graph[u]){
        if(!visited[v]){
            dfsple
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
    }

    for(int i=1; i<=v; i++){
        if(!visited[i]){
            topoDFS(i);
        }
    }

    return 0;
}