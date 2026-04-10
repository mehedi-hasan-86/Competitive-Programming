#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        long long h;
        cin >> n >> h;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<long long> water(n);
        for(int i=0; i<n; i++) water[i] = max(0LL, h - a[i]);

        vector<long long> segments;
        long long cur = 0;
        for(int i=0; i<n; i++){
            if(water[i] > 0){
                cur += water[i];
            } else {
                if(cur > 0){
                    segments.push_back(cur);
                    cur = 0;
                }
            }
        }
        if(cur > 0) segments.push_back(cur);

        sort(segments.rbegin(), segments.rend());

        long long ans = 0;
        if(segments.size() >= 1) ans += segments[0];
        if(segments.size() >= 2) ans += segments[1];

        cout << ans << "\n";
    }

    return 0;
}