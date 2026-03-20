#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool can(lli k, vector<pair<lli, lli>> &seg){
    lli l=0, r = 0;
    for(auto x : seg){
        l -=k;
        r +=k;

        l = max(l, x.first);
        r = min(r, x.second);

        if(l>r) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<pair<lli, lli>> seg(n);
        for(int i=0; i<n; i++){
            cin >> seg[i].first >> seg[i].second;
        }
        lli low = 0, high = 1e9, ans = high;
        while(low<=high){
            lli mid = low + (high-low)/2;
            if(can(mid,seg)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}