#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n,q;
    cin >> n >> q;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    vi x(n+1,0);
    while(q--){
        int l,r;
        cin >> l >> r;
            x[l-1]++;
            x[r]--;  
    }
    for(int i=1; i<n; i++){
        x[i] +=x[i-1];
    }
    sort(x.rbegin(), x.rend());
    // for(auto m : x){
    //     cout <<  m << " ";
    // }
    // cout << endl;

    lli ans = 0;
    for(int i=0; i<n; i++){
        ans += (1LL*x[i]*a[i]);
    }
    cout << ans << endl;
    return 0;
}