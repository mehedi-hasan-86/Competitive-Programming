#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n =5;
    int capacity = 10;
    vi weight = {2,3,3,5,6};

    const int INF = 1e9;
    vector<pair<int,int>> dp(1<<n);
    dp[0] = {1,0};

    for(int mask = 1; mask<(1<<n); mask++){
        dp[mask] = {n+1, 0};

        for(int p = 0; p<n; p++){
            if(mask & (1<<p)){
                auto option = dp[mask ^ (1<<p)];

                if(option.second + weight[p] <= capacity){
                    option.second += weight[p];
                }else{
                    option.first++;
                    option.second = weight[p];
                }

                if(option.first < dp[mask].first || (option.first == dp[mask].first && option.second < dp[mask].second)){
                    dp[mask] = option;
                }
            }
        }
    }
    cout << dp[(1<<n)-1].first << endl;
    cout << dp[(1<<n)-1].second << endl;

    return 0;
}