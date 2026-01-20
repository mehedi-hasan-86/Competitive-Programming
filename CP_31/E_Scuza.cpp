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
    int n,q;
    cin >> n >> q;

    vl a(n), k(q);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<q; i++) cin >> k[i];

    vector<lli> pref(n), mx(n);
    pref[0] = a[0];
    mx[0]=a[0];
    
    for(int i=1; i<n; i++){
        pref[i] = pref[i-1]+a[i];
        mx[i] = max(mx[i-1],a[i]);
    }

    for(int i=0; i<q; i++){
        lli ki = k[i];

        int idx = upper_bound(mx.begin(), mx.end(),ki) - mx.begin() -1;

        if(idx < 0) cout << 0 << " ";
        else cout << pref[idx] << " ";

        // lli res = 0;
        // for(int j=0; j<n; j++){
        //     if(k[i]>= a[j]){
        //         res += a[j];
        //     }else{
        //         break;
        //     }

        // }
        // cout << res << " ";
    }
    cout << endl;
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