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
const int N = 2e6+7;

int f(int i){
    int cnt = 0;

    while(i != 0){
        i/=3;
        cnt++;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vi a(N),pfs(N);
    for(int i=0; i<N;i++){
        a[i] = f(i);
    }
    pfs[0] = a[0];
    for(int i=1; i<N; i++){
        pfs[i] = pfs[i-1] + a[i];
    }
    

    int t;
    cin >> t;

    while(t--){
        int l,r;
        cin >> l >> r;
        cout << (a[l] + pfs[r]-pfs[l-1]) << endl;
    }
    return 0;
}