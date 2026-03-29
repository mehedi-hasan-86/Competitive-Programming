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

        for(int tt=1; tt<=2*m; tt++){

            lli need = 0, ext = 0;
            for(int i=1; i<=n; i++){
                int dn = min(tt,cnt[i]);
                need +=cnt[i]-dn;
                ext +=(tt-dn)/2;
            }
            if(ext>=need){
                cout << tt<< endl;
                break;
            }
        }
    }

    return 0;
}