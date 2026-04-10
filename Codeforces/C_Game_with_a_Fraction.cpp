#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll p,q;
        cin >> p >> q;

        // already trap
        if (3*p == 2*q){
            cout << "Bob\n";
            continue;
        }

        bool bob = false;

        // p-boundary check
        if (p % 2 == 0){
            ll x = p/2;
            ll q0 = 3*x;
            if (q0 <= q){
                ll L = q - q0;
                if (L % 2 == 0) bob = true;
            }
        }

        // q-boundary check
        if (q % 3 == 0){
            ll x = q/3;
            ll p0 = 2*x;
            if (p0 <= p){
                ll L = p - p0;
                if (L % 2 == 0) bob = true;
            }
        }

        cout << (bob ? "Bob\n" : "Alice\n");
    }
    return 0;
}
