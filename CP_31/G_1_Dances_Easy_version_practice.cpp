#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

bool can(int k, vi &a, vi &b){
    int n = b.size();
    for(int i=0; i<k; i++){
        if(a[i]>=b[n-k+i]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        vi a(n-1), b(n);
        for(int i=0; i<n-1; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        a.push_back(m);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int l=0, r = n, best =0;

        while(l<=r){
            int mid = l + (r-l)/2;
            if(can(mid, a, b)){
                best = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        cout << n-best << endl;

    }

    return 0;
}