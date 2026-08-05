#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const lli MOD = 1e9 + 7;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl a(n), b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        lli ans = 1;
        for(int i=n-1; i>=0; i--){
            int cnt = a.end()-upper_bound(a.begin(), a.end(),b[i]);
            int choice = cnt - (n-1-i);

            if(choice <= 0){
                ans =  0;
                break;
            }
            ans = ans*choice % MOD;
        }
        cout << ans << endl;
    }

    return 0;
}