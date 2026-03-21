#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int vis[n+1]={0};

    vi a(n);
    for(int i=0; i<n-1; i++){
        cin >> a[i];
        vis[a[i]] = 1;
    }
    for(int i=1; i<=n; i++){
        if(vis[i]==0){
            cout << i << " ";
            return 0;
        }
    }

    return 0;
}