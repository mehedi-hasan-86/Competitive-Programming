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

lli cntPairs(vl &a, lli k){
    int l = 0;
    int r = a.size() -1;
    lli cnt = 0;

    while(l<r){
        if(a[l]+a[r]<=k){
            cnt +=(r-l);
            l++;
        }else{
        r--;
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        lli x,y;
        cin >> n >> x >> y;

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        lli sum = accumulate(a.begin(), a.end(), 0LL);
        sort(a.begin(), a.end());

        lli upper = sum - x;
        lli lower = sum - y;

        // lli cntU = cntPairs(a,upper);
        // lli cntL = cntPairs(a,lower-1);
        // cout << cntU << " " << cntL << endl;
        lli ans = cntPairs(a,upper) -  cntPairs(a,lower-1);
        cout << ans << endl;
    }

    return 0;
}