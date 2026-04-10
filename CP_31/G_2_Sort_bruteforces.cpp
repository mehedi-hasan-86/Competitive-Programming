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
        int n,k;
        cin >> n >> k;

        vl a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int total_cnt = 0;
        for(int i=0; i<=n-k-1; i++){
            bool isC = true;
            for(int j=0; j<k; j++){
                // lli val1 = (1LL<<j)*a[i+j];
                // lli val2 = (1LL<<(j+1))*a[j+1+i];
                lli val1 = a[i+j];
                lli val2 = 2*a[i+j+1];
                if( val1>=val2 ){
                    isC = false;
                    break;
                }
            }
            if(isC) total_cnt++;
        }
        cout << total_cnt << endl;
    }

    return 0;
}