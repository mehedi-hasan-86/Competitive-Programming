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
        lli k;
        cin >> n >> k;

        vl a(n);
        for(int i=0; i<n; i++){
            cin  >> a[i];
        }
        lli ans = 0;

        for(int bit = 30; bit>=0; bit--){
            lli need = 0;
            for(int i=0; i<n; i++){
                if(!(a[i] & (1LL<<bit))){
                    need++;
                }
            }

            if(need <= k){
                k -=need;
                ans |=(1LL<<bit);

                for(int i=0; i<n; i++){
                    a[i] |=(1LL<<bit);
                }
            }

        }
        cout << ans << endl;
    }

    return 0;
}