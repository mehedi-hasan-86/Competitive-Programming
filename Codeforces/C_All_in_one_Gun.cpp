#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; ll h, k;
        cin >> n >> h >> k;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        auto calc_time = [&](vector<ll> &b) -> ll {
            ll total = accumulate(b.begin(), b.end(), 0LL);
            if(total >= h) {
                ll sum = 0;
                for(int i = 0; i < n; i++) {
                    sum += b[i];
                    if(sum >= h) return i + 1;
                }
            }
            // multiple reloads
            ll cycles = (h - 1) / total;
            ll rem = h - cycles * total;
            ll sum = 0;
            int idx = 0;
            for(idx = 0; idx < n; idx++) {
                sum += b[idx];
                if(sum >= rem) break;
            }
            return cycles * (n + k) + (idx + 1);
        };

        ll ans = calc_time(a);

        // swap largest bullet with first
        int mx = max_element(a.begin(), a.end()) - a.begin();
        if(mx != 0) {
            swap(a[0], a[mx]);
            ans = min(ans, calc_time(a));
        }

        cout << ans << "\n";
    }

    return 0;
}