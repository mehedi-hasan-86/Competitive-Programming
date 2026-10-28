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

        vi a(n-1);
        for(int i=0; i<n-1; i++){
            cin >> a[i];
        }

        int  ans = -(accumulate(a.begin(), a.end(),0));
        cout << ans << endl;
    }

    return 0;
}