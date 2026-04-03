#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 2e5 + 5;
const int MOD = 1e9+7;

lli fact[MAX];

void prc(){
    fact[0] = 1;
    for(int i=1; i<MAX; i++){
        fact[i] = (fact[i-1]*i)%MOD;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    prc();

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        lli x = *min_element(a.begin(), a.end());
        lli cnt = count(a.begin(), a.end(), x);

        bool isC = true;
        for(auto v : a){
            if(((v&x) != x)){
                isC = false;
                break;
            }
        }
        if(!isC || cnt<2){
            cout << 0 << endl;
            continue;
        }

        lli ans = cnt*(cnt-1)%MOD;
        ans = ans*fact[n-2]%MOD;

        cout << ans << endl;
    }

    return 0;
}