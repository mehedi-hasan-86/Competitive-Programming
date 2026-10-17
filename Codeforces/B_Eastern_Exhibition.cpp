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
        cin >> n;

        vi x,y;
        for(int i=0; i<n; i++){
            int a,b;
            cin >> a >> b;
            x.push_back(a);
            y.push_back(b);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        lli cntX = 1;
        lli cntY = 1;

        if(n%2==0){
            cntX = x[n/2] - x[n/2 - 1]+1;
            cntY = y[n/2] - y[n/2-1]+1;
        }
        lli ans = cntX*cntY;
        cout << ans << endl;
    }

    return 0;
}