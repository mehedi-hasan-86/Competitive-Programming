#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }

        // Sort the array with original indices
        vector<pair<long long,int>> v(n);
        for (int i = 0; i < n; i++) v[i] = {a[i], i};
        sort(v.begin(), v.end());

        // Build sorted values array
        for (int i = 0; i < n; i++) b[i] = v[i].first;

        // Prefix sums
        vector<long long> pref(n);
        pref[0] = b[0];
        for (int i = 1; i < n; i++) pref[i] = pref[i-1] + b[i];

        // ans in sorted order
        vector<int> ans_sorted(n, 0);

        // Largest element → answer = n-1
        ans_sorted[n-1] = n-1;

        // Process from second largest → smallest
        for (int i = n-2; i >= 0; i--) {
            long long val = b[i];

            // Find largest j such that pref[j] >= val
            int j = int(upper_bound(pref.begin(), pref.end(), val) - pref.begin()) - 1;

            if (j < i) {
                // cannot even take itself + smaller ones; stuck
                ans_sorted[i] = i;
            } else {
                // take everything up to j, then inherit remaining from ans_sorted[j]
                ans_sorted[i] = ans_sorted[j];
            }
        }

        // Convert ans_sorted back to original order
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int original_index = v[i].second;
            ans[original_index] = ans_sorted[i] - 1;  
        }

        // Print
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
