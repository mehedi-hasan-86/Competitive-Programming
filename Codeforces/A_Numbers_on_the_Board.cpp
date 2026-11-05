
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        if (l > 0 || r < 0) {
            cout << r - l << '\n';
        } else {
            int m = min(r,-l);
            cout << max(0, r-l-2*m-1) << '\n';
        }
    }
    return 0;
}
