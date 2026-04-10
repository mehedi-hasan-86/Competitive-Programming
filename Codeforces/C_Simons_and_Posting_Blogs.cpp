#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> blogs(n);
        int maxUser = 0;
        for (int i = 0; i < n; i++) {
            int l; cin >> l;
            blogs[i].resize(l);
            for (int j = 0; j < l; j++) {
                cin >> blogs[i][j];
                maxUser = max(maxUser, blogs[i][j]);
            }
        }

        vector<int> cnt(maxUser + 1, 0);
        vector<vector<int>> where(maxUser + 1);

        for (int i = 0; i < n; i++) {
            for (int x : blogs[i]) {
                where[x].push_back(i);
            }
        }

        for (int i = 1; i <= maxUser; i++) {
            cnt[i] = where[i].size();
        }

        vector<int> usedBlog(n, 0);
        vector<int> inQ(maxUser + 1, 0);
        vector<int> result;

        int remaining = n;
        while (remaining > 0) {
            int best = -1;
            for (int u = 1; u <= maxUser; u++) {
                if (cnt[u] > 0 && !inQ[u]) {
                    best = u;
                    break;
                }
            }

            if (best == -1) break;
            result.push_back(best);
            inQ[best] = 1;

            // remove all blogs that contain this user
            for (int idx : where[best]) {
                if (usedBlog[idx]) continue;
                usedBlog[idx] = 1;
                remaining--;

                for (int x : blogs[idx]) {
                    cnt[x]--;
                }
            }
        }

        for (int x : result) cout << x << " ";
        cout << "\n";
    }
    return 0;
}