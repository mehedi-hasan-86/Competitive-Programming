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

    int n,q;
    cin >> n >> q;

    vl a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vl d(n+1);
    d[0] = a[0];
    for(int i=0; i<n; i++){
        d[i] = a[i]-a[i-1];
    }
    d[n] = 0;
    while(q--){
        int l,r;
        lli val;
        cin >> l >> r  >> val;
        d[l-1] +=val;
        d[r] -=val;
    }

    for(int i=0; i<n; i++){
        if(i==0) a[i] = d[i];
        a[i] = d[i] + a[i-1];

        cout << a[i] << " ";
    }

    return 0;
}