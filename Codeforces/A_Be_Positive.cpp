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
        int n;
        cin >> n;

        vi a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int cntMinus1 = count(a.begin(), a.end(), -1);
        int cntZero = count(a.begin(), a.end(), 0);

        int ans = cntZero;
        if(cntMinus1%2==1) ans +=2;
        cout << ans << endl;
    }

    return 0;
}