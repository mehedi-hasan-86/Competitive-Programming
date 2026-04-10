#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli cnt(lli y){
    return y*(y+1)/2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        lli k, x;
        cin >> k >> x;

        int l = 1, r = 2*k-1, ans = r;

        while(l<=r){
            int m = l + (r-l)/2;

            lli total ;
            if(m<k){
                total = cnt(m);
            }else{
                total = cnt(k) + cnt(k-1) - cnt(2*k-1-m);
            }

            if(total>=x){
                r = m-1;
                ans = m;
        
            }else{
                l = m+1;
            }

        }
        cout << ans << endl;
    }

    return 0;
}