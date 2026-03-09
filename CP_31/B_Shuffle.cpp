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
        lli n,x;
        int m;
        cin >> n >> x >> m;

        lli mnL = x, mxR = x;
        for(int i=0; i<m; i++){
            lli l,r;
            cin >> l >> r;

            if(mxR>=l&&mnL<=r){
                mnL = min(l,mnL);
                mxR = max(mxR, r);
                // cout << mnL << " " << mxR << endl;
            }
        }
        cout << mxR - mnL+1<< endl;
    }

    return 0;
}