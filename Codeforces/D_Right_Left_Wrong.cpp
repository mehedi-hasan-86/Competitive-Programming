#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        string s;
        cin >> s;

        vll pref(n,0);
        pref[0] = a[0];
        for(int i=1; i<n; i++){
            pref[i] = pref[i-1] + a[i];
        }

        int l = 0, r = n-1;
        lli ans  = 0;
        while(l<r){
            if(s[l] == 'L' && s[r]=='R'){
                if(l==0){
                 ans += pref[r];
                }else{
                    ans += (pref[r]-pref[l-1]);
                }
              l++, r--;
            }else if(s[l]=='R'){
                l++;
            }else if(s[r]=='L'){
                r--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}