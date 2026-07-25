#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const lli INF = 2e18;

lli makeBig(lli x , vector<lli> &digit, map<lli, lli> &dp){
    if(x==0) return digit[0];
    if(dp.count(x)) return dp[x];

    for(lli d : digit){
        if(x<=d) return dp[x] = d;
    }
    lli ans =  INF;
    for(lli d : digit){
        lli need = (x-d+9)/10;
        ans = min(ans, makeBig(need, digit, dp)*10 + d);
    }
    return dp[x] = ans;
}

lli makeSmall(lli x, vl &digit, map<lli, lli> &dp){
    if(x==0) return INF;
    if(dp.count(x)) return dp[x];

    lli ans = -INF;
    for(lli d : digit){
        if(d>x) continue;
        
        ans = max(ans, d);
        lli need = (x-d)/10;
        lli tmp = makeSmall(need, digit, dp);

        if(tmp != INF){
            ans = max(ans, tmp*10 + d);
        }
    }
    return dp[x] = ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        lli a;
        int n;
        cin >> a >> n;

        vector<lli> digit(n);
        for(int i=0; i<n; i++){
            cin >> digit[i];
        }
        lli ans = INF;

        map<lli, lli> dp;
        lli bigger = makeBig(a, digit, dp);
        ans = min(ans, bigger-a);
        dp.clear();

        lli smaller = makeSmall(a,digit, dp);

        if(smaller != INF){
            ans = min(ans, a-smaller);
        }
        cout << ans << endl;
    }

    return 0;
}