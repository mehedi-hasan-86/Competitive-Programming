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
        cin  >> n;

        vi a(n+1);
        vi lst(n+1, 0);
        vi gap(n+1,0);
        vi ans(n+1,-1);

        for(int i=1; i<=n; i++){
            cin >> a[i];
            int x = a[i];

            gap[x] = max(gap[x], i-lst[x]-1);
            lst[x] = i;
        }

        for(int x = 1; x<=n; x++){
            gap[x] = max(gap[x], n-lst[x]);
        }
        for(int x=1; x<=n; x++){
            int k = gap[x]+1;

            for(int j=k; j<=n && ans[j] == -1; j++){
                ans[j] = x;
            }
        }
        for(int k=1; k<=n; k++){
            cout << ans[k];

            if(k<n){
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}