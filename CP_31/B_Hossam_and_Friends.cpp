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
        int n,m;
        cin >> n >> m;

        vi mnNonFnd(n+1, n+1);
        for(int i=0; i<m; i++){
            int x,y;
            cin >> x >> y;
            if(x>y) swap(x,y);
            mnNonFnd[x] = min(mnNonFnd[x],y-1);
        }

        lli ans = 0;
        int R = n;
        for(int i=n; i>=1; i--){
            R = min(R, mnNonFnd[i]);
            ans +=(R-i+1);
        }
        cout << ans << endl;
    }

    return 0;
}