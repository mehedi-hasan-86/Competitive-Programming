#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int low = 1;
        int mid = n + 1;
        int high = 3 * n;

        vector<int> p;

        for(int i = 0; i < n; i++) {
            p.push_back(low);
            p.push_back(high);
            p.push_back(mid);

            low++;
            mid++;
            high--;
        }

        for(int x : p) cout << x << " ";
        cout << "\n";
    }

    return 0;
}