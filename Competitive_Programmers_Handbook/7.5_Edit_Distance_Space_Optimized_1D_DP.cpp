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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string x = "Love";
    string y = "Quran";

    int n = x.length();
    int m = y.length();

    vi prev(m+1), curr(m+1);
    for(int j=0; j<=m; j++){
        prev[j] = j;
    }

    for(int i=1; i<=n; i++){
        curr[0] = i;
        for(int j=1; j<=m;j++){
            int cost = (x[i-1]==y[j-1] ? 0:1);
            curr[j] = min({curr[j-1]+1, prev[j]+1 ,prev[j-1]+cost});
        }
        swap(prev, curr);
    }

    cout << prev[m] << endl;
    return 0;
}