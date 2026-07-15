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

        string s;
        cin >> s;

        vi cnt(3,0);
        cnt[0] = 1;
        int pref = 0;
        int alt = 1;
        lli ans = 0;

        for(int i=0; i<n; i++){
            if(s[i]=='1') pref++;
            else pref--;

            pref %=3;
            if(pref<0) pref +=3;

            ans += cnt[0] +  cnt[1] + cnt[2] - cnt[pref];

            if(i>00 & s[i] != s[i-1]) alt++;
            else alt = 1;

            ans -= (alt-1)/2;
            cnt[pref]++;
        }
        cout << ans << endl;
  
    }

    return 0;
}