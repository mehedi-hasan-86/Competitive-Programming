#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        lli a,b;
        cin >> n >> a >> b;

        vl x(n+1,0);
        vl p(n+1,0);

        for(int i=1; i<=n;i++){
            cin >> x[i];
            p[i] = p[i-1] + x[i];
        }

        lli ans = LLONG_MAX;
        for(int f = 0; f<=n; f++){
            lli cost = a*x[f] + b*(p[n]-p[f] - 1LL*(n-f-1)*x[f]);
            ans = min(ans, cost);
        }
        cout << ans << endl;
    }
    return 0;
}