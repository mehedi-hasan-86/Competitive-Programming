#include<bits/stdc++.h>
using namespace std;

const int N = 100;
vector<int> graph[N];
vector<bool> visited(N,false);

void bfs(int start){
    queue<int>q;
    q.push(start);

    visited[start]= true;
    while( !q.empty()){
       int u = q.front();
       cout << u << " ";
       q.pop();

       for(int s : graph[u]){
        if(!visited[s]){
            visited[s]= true;
            q.push(s);
        }
       }
      
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int v, e;
    cin >> v >> e;

    for(int i=0; i<e; i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1);


    return 0;
}