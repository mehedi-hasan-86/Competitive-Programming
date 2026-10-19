
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

    while (t--) {
        int n;
        cin >> n;

        lli p = 0;

        for (int i = 0; i < n; i++) {
            lli a;
            cin >> a;

            if (i % 2 == 0) {
                p += a;
            } else {
                p -= a;
            }
        }

        cout << p << endl;
    }

    return 0;
}
