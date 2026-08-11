#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int LIS(vi &a){
    vi tails;
    
    for(int x : a){
        auto it = lower_bound(tails.begin(), tails.end(), x);

        if(it==tails.end()){
            tails.push_back(x);
        }else{
            *it = x;
        }
    }
    return tails.size();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vi dp(n,1);
    vi parent(n,-1);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[j]<a[i] && dp[j]+1 > dp[i]){
                dp[i] = dp[j]+1;
                parent[i] = j;
            }
        }
    }

    int best = 0;
    for(int i=1; i<n; i++){
        if(dp[i]>dp[best]) best = i;
    }

    cout << "LIS: " << dp[best] << endl;
    vi lis;
    for(int i=best; i != -1; i=parent[i]){
        lis.push_back(a[i]);
    }
    reverse(lis.begin(), lis.end());

    cout <<"LIS: ";
    for(int x : lis) cout << x << " ";
    cout << endl;

    cout << LIS(a) << endl;

    return 0;
}