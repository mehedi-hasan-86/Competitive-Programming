#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vector<vector<int>> dp(n+2, vector<int>(2,0));

        for(int i=n-1; i>=0; i--){
            // Fnd
            dp[i][0] = a[i] + dp[i+1][1];
            if(i<n-1){
                dp[i][0] = min(dp[i][0], a[i]+a[i+1]+dp[i+2][1]);
            }

            // Me
            dp[i][1] = dp[i+1][0];
            if(i<n-1){
                dp[i][1] = min(dp[i][1], dp[i+2][0]);
            }
        }
        cout << dp[0][0] << endl;
    }
    

    return 0;
}