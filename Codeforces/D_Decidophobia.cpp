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
        int n,d;
        cin >> n >> d;

        vl a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vl b(3*n);
        for(int i=0; i<3*n; i++){
            b[i] = a[i%n];
        }
        
        vl pfs(3*n+1, 0);
        for(int i=0; i<3*n; i++){
            pfs[i+1]=pfs[i]+b[i];
        }

        lli ans = 0;
        for(int i=0; i<n; i++){
            int pos = i+n;
            lli l = pfs[pos] - pfs[pos-d];
            lli r = pfs[pos+d+1]-pfs[pos+1];

            lli res = 2LL*d*a[i]-l-r;

            if(res>0){
                ans +=res;
            }
        }
        cout << ans << endl;
    }

    return 0;
}