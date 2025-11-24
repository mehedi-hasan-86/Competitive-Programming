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
    vl a(n), pref(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(i==0) pref[i] = a[i];
        else pref[i] = pref[i-1] + a[i];
    }

    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >>  l >> r; // reminder : 0-indexed

        lli  sum = pref[r]-(l>0 ? pref[l-1] :  0);
        cout << sum << endl;

    }

    return 0;
}