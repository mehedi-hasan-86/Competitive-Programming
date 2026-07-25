#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int matrixChainMul(vector<int> &arr){
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n,0));

    for(int len = 2; len<n; len++){
        for(int i=1; i<=n-len; i++){
            int j = i+len-1;
            dp[i][j] = INT_MAX;

            for(int k=i; k<j; k++){
                int cost = dp[i][k] + dp[k+1][j] + arr[i-1]*arr[k]*arr[j];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }
    return dp[1][n-1];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << matrixChainMul(arr) << endl;

    return 0;
}