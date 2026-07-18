#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void knapsack(vector<int> &val, vector<int> &wei, int W, int n){
     vector<vector<int>> dp(n+1,vector<int>(W+1, 0) );

     for(int i=1; i<=n; i++){
        for(int w=1; w<=W; w++){
            if(w>=wei[i]){
                dp[i][w] = max(dp[i-1][w], val[i]+ dp[i-1][w-wei[i]]);
            }else{
                dp[i][w] = dp[i-1][w];
            }
        }
     }
     cout << dp[n][W] << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> val(n+1), wei(n+1);
    for(int i=1;i<=n; i++){
        cin >> val[i];
    }
    for(int i=1; i<=n; i++){
        cin >> wei[i];
    }

    int W;
    cin >> W;

    knapsack(val, wei, W, n);

    return 0;
}