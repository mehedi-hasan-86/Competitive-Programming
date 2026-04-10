#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        // segment between portals is [x, y)
        vector<int> segment;
        for (int i = x; i < y; i++) segment.push_back(p[i]);

        // sort segment to minimize lexicographically
        sort(segment.begin(), segment.end());

        // put sorted elements back
        int idx = 0;
        for (int i = x; i < y; i++) {
            p[i] = segment[idx++];
        }

        // output result
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}