#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void solve(){
    lli n, x,y;
    cin >> n >> x >> y;

    vl a(n);
    lli res = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    lli val = 0;
    for(int i=0; i<n; i++){
        val += (a[i]/x)*y;
    }

    lli ans = 0;
    for(int i=0; i<n; i++){
        // lli cur = a[i];
        // for(int j=0; j<n; j++){
        //     if(i==j) continue;
        lli  cur = a[i] + val - (a[i]/x)*y;
        // }
        ans = max(cur, ans);
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}