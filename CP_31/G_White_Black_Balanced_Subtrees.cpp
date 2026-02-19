#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 200005;
vector<int> adj[N];

int white[N], black[N];

string s;
int ans;

void dfs(int node){

    white[node] = 0;
    black[node] = 0;

    for(int child : adj[node]){
        dfs(child);
        white[node] += white[child];
        black[node] += black[child];
    }

    if(s[node-1]=='W') white[node]++;
    else black[node]++;

    if(white[node]== black[node]) ans++;
    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        for(int i=1; i<=n; i++){
            adj[i].clear();
        }

        for(int i=2; i<=n; i++){
            int parent;
            cin >> parent;
            adj[parent].push_back(i);
        }


        cin >> s;

        ans = 0;
        dfs(1);

        cout << ans << endl;

    }

    return 0;
}