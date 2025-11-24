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

    int n;
    cin >> n;

    vector<long long> dp(n+1, 0);
    dp[0]=1;
    dp[1]=1;

    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1] + dp[i-2];
    }
    cout << dp[n] << endl;

    return 0;
}