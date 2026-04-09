#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;
int parent[MAX], sz[MAX];

int find_parent(int v){
    if(v==parent[v]) return v;
    return parent[v] = find_parent(parent[v]);
}

void union_sets(int a, int b){
    a = find_parent(a);
    b = find_parent(b);

    if(a != b){
        if(sz[a]<sz[b]) swap(a,b);
        parent[b]=a;
        sz[a] += sz[b];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        parent[i] = i;
        sz[i] = 1;
    }

    while(m--){
        int k;
        cin >> k;

        vi grp(k);
        for(int i=0; i<k; i++){
            cin >> grp[i];
        }

        for(int i=1; i<k; i++){
            union_sets(grp[i-1], grp[i]);
        }
    }
    for(int i=1; i<=n; i++){
        cout << sz[find_parent(i)] << " ";
    }
    cout <<endl;

    return 0;
}