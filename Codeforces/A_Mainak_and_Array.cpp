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



        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        int ans = a[n-1]-a[0];
        //  sort(a.begin(), a.end());
        // for(auto x : a){
        //     cout << x  << " ";
        // }
        // cout << endl;

        for(int i=0; i<n-1; i++){
            ans = max(ans,a[n-1]-a[i]);
        }
        for(int i=1; i<n; i++){
            ans = max(ans,a[i]-a[0]);
        }
        for(int i=0; i<n; i++){
            ans = max(ans, a[i]-a[(i+1)%n]);
        }

        cout << ans << endl;
        
    }

    

    return 0;
}