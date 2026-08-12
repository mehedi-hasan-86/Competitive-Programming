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

int n,m;
vector<vi> transitions;

void generateNext(int col, int currentMask, int nextMask){
    if(col == m){
        transitions[currentMask].push_back(nextMask);
        return;
    }
    if(currentMask & (1<<col)){
        generateNext(col+1, currentMask, nextMask);
    }else{
        generateNext(col+1, currentMask, nextMask | (1<<col));

        if(col+1 < m && !(currentMask & (1<<(col+1)))){
            generateNext(col+2, currentMask, nextMask);
        }
    }
}

int countTilings(int r, int c){
    n = r;
    m = c;
    if(n<m) swap(n,m);

    transitions.assign(1<<m, {});
    for(int mask = 0; mask < (1<<m); mask++){
        generateNext(0, mask, 0);
    }

    vll dp(1<<m, 0);
    dp[0] = 1;

    for(int r = 0;r<n; r++ ){
        vll nextDP(1<<m, 0);

        for(int mask = 0; mask<(1<<m); mask++){
            if(dp[mask]==0) continue;

            for(int nextMask : transitions[mask]){
                nextDP[nextMask] += dp[mask];
            }
        }
        dp = nextDP;
    }
    return dp[0];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int r = 4, c = 7;
    cout << countTilings(r,c) << endl;

    return 0;
}