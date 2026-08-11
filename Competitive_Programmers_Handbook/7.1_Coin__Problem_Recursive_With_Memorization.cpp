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

int memo[N];
bool ready[N];

vi coins = {1,3,4};
int solve(int x){
    if(x<0) return INF;
    if(x==0) return 0;

    if(ready[x]) return memo[x];

    int best = INF;
    for(int c : coins){
        best = min(best, solve(x-c)+1);
    }
    memo[x] = best;
    ready[x] = true;
    return best;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 6;
    cout << solve(n) << endl;

    return 0;
}