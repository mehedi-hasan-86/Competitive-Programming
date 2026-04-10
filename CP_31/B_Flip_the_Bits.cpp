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

        string a,b;
        cin >> a >> b;

        vi balance(n);
        int cnt0 = 0, cnt1 = 0;

        for(int i=0; i<n; i++){
            if(a[i] == '0') cnt0++;
            else cnt1++;
            balance[i] = cnt0-cnt1;
        }

        bool ok = true;
        int flip = 0;

        for(int i=n-1; i>=0; i--){
            char cur = a[i];
            if(flip){
                cur = (cur== '0' ? '1' : '0');
            }
            if(cur == b[i]) continue;

            if(balance[i] != 0){
                ok = false;
                break;
            }
            flip ^=1;

        }
        cout << (ok ? "YES\n":"NO\n");
    }

    return 0;
}