#include <bits/stdc++.h>
using namespace std;

bool check(long long x, const vector<long long>& a, long long m, long long l) {
    long long n = a.size();
    vector<long long> intervals;
    
    // first interval before first flashlight
    intervals.push_back(a[0]-1);
    
    // intervals between flashlights
    for(long long i=1;i<n;i++){
        intervals.push_back(a[i]-a[i-1]-1);
    }
    
    // interval after last flashlight
    intervals.push_back(l - a[n-1]);

    // Greedy: for each interval, count how many times a single animatronic would exceed x
    vector<long long> need;
    for(auto len : intervals){
        // How many "resets" needed for this interval
        long long cnt = len / x;
        need.push_back(cnt);
    }
    
    // Sort descending, largest intervals first
    sort(need.rbegin(), need.rend());

    long long used = 0;
    for(auto cnt : need){
        used += cnt;
    }
    
    return used <= m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        long long n,m,l;
        cin >> n >> m >> l;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        long long low=0, high=l, ans=l;
        while(low <= high){
            long long mid = (low+high)/2;
            if(mid==0) {ans=0; break;}
            // check if x=mid is possible
            vector<long long> intervals;
            intervals.push_back(a[0]-1);
            for(int i=1;i<n;i++) intervals.push_back(a[i]-a[i-1]-1);
            intervals.push_back(l - a[n-1]);

            long long extra = 0;
            for(auto len: intervals){
                extra += (len + mid -1)/mid; // ceiling of len/mid
            }

            if(extra <= m){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        cout << ans << "\n";
    }
}