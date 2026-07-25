#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int knapsack(int W, vector<int> &wei, vector<int> &val, int n){

    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));
    for(int i=1; i<=n; i++){
        for(int w=1; w<=W; w++){
            if(wei[i]<=w){
                dp[i][w] = max(dp[i-1][w], val[i]+ dp[i-1][w-wei[i]]);
            }else{
                dp[i][w] = dp[i-1][w]; 
            }
        }
    }
    return dp[n][W];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> val(n+1), wei(n+1);
    for(int i=1; i<=n; i++){
        cin >> val[i] >> wei[i];
    }

    int W;
    cin >> W;

    cout << knapsack(W, wei, val, n) << endl;

    return 0;
}