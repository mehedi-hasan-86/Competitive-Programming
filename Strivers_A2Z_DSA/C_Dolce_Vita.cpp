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
        int n,x;
        cin >> n>>x;

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        vl pref(n);
        pref[0] = a[0];
        for(int i=1; i<n; i++){
            pref[i] = pref[i-1] + a[i];
        }
        lli ans = 0;

        for(int i=0; i<n; i++){
            if(pref[i]>x) break;

            lli D = (x-pref[i])/(i+1);
            ans +=(D+1);
        }
        cout << ans << endl;

    }

    return 0;
}