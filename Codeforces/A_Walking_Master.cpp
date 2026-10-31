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
        lli a,b,c,d;
        cin >> a >> b >> c >> d;

        // if(b>a){
        //     cout << -1 << endl;
        //     continue;
        // }
        lli x = abs(b-d);
        if(d<b||x+a<c){
            cout << -1 << endl;
            continue;
        }
        lli ans = 2*x+a-c;
        cout << ans << endl;

    }

    return 0;
}