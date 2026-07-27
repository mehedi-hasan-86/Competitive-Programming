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

    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;

        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vl pref(n+1,0);
        for(int i=0; i<n; i++){
            pref[i+1] = pref[i]+a[i];
        }
        
        lli ans = 0;
        for(int i=0; i<=k; i++){
            int l = 2*i;
            int r = n - (k-i);

            lli sum = pref[r]-pref[l];
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }

    return 0;
}