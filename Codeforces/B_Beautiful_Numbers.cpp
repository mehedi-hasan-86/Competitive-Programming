#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int M = 1e9;
int dp[20][172];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int n = s.size();

        for(int i=0; i<=n; i++){
            for(int j=0; j<172; j++){
                dp[i][j] = M;
            }
        }
        dp[0][0] = 0;
        
        for(int i=0; i<n; i++){
            for(int sm = 0; sm<172; sm++){
                if(dp[i][sm] == M){
                    continue;
                }
                int dig = s[i] - '0';
                if(sm + dig < 172){
                    dp[i+1][sm+dig] = min(dp[i+1][sm+dig], dp[i][sm]);
                }

                    for(int x = 0; x<=9; x++){
                        if(i==0 && x == 0) continue;
                        if(x == dig) continue;

                        if(sm + x< 172){
                            dp[i+1][sm+x] = min(dp[i+1][sm+x], dp[i][sm]+1);
                        }
                    }
                
            }

        }
                 int ans = 1e9;
                for(int sm = 0; sm<=9; sm++){
                    ans = min(ans, dp[n][sm]);
                }
                cout << ans << endl;



        
    }

    return 0;
}