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
const int N = 5000;

int n;
int l[N+10], r[N+10], u[N+10], v[N+10];

bool isC(int m){
    int j = 1;

    for(int i=1; i<=n && j<=m; i++){
        int x = m-j+1;
        if((j<l[i] || j>r[i]) && (x<u[i] || x>v[i])) j++;
    }
    return j == m+1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> l[i] >> r[i] >> u[i] >> v[i];
    }
    bool ok = false;
    for(int m = n; m>=1; m--){
        if(!isC(m)) continue;
        cout << m << endl;
        ok = true;
        break;
    }
    if(!ok) cout << 0 << endl;
    }

    return 0;
}