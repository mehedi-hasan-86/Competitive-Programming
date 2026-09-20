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

    int n;
    lli s;
    cin >> n >> s;

    vl a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int l = 0;
    lli x  = 0;
    int res = INT_MAX;

    for(int r = 0; r<n; r++){
        x +=a[r];

        while(x-a[l]>=s){
            x -=a[l];
            l++;
        }
        if(x>=s) res = min(res, r-l+1);
    }
    if(res != INT_MAX)  cout << res << endl;
    else cout << -1 << endl;
    return 0;
}