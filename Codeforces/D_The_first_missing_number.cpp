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
typedef vector<long long> vl;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n >> m;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    unordered_set<int> seen(a.begin(), a.end());
    for(int i=-m; i<m; i++){
        if(seen.count(i)==0){
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}