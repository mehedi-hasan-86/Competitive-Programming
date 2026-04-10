#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,m; cin >> n >> m;

        vi cnt(n+1,0);
        for(int i=0; i<m;  i++){
            int x; cin >> x;
            cnt[x]++;
        }

        int l = 1, r = 2*m, ans = 2*m;

        // for(int tt=1; tt<=2*m; tt++){
        while(l<=r){
           int mid = l+(r-l)/2;

             lli need = 0, ext = 0;
            for(int i=1; i<=n; i++){
                int dn = min(mid,cnt[i]);
                need +=cnt[i]-dn;
                ext +=(mid-dn)/2;
            }
            if(ext>=need){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}