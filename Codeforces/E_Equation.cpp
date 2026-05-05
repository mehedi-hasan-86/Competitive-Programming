#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double c;
    cin >> c;

    double l = 0, r = c;

    for (int i = 0; i < 100; i++) {
        double m = (l + r) / 2;

        if (sqrt(m * m + m) >= c)
            r = m;   // good
        else
            l = m;   // bad
    }

    cout << fixed << setprecision(10) << r << endl;

    return 0;
}