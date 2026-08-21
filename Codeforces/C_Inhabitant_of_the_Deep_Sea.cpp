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

    int t;
    cin >> t;

    while(t--){
        int n;
        lli k;
        cin >> n >> k;

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        // if(accumulate(a.begin(), a.end(),0LL)==k){
        //     cout << n << endl;
        //     continue;
        // }
        lli lk = (k+1)/2;
        lli rk = k/2;

        int l = 0, r =n-1;
        int ans = 0;
        while(l<=r && lk>=a[l]){
            lk -=a[l];
            l++;
            ans++;
        }
        // if(lk != 0) rk +=lk;

        while(l<=r && rk>=a[r]){
            rk -= a[r];
            r--;
            ans++;
        }
        if((l==r) && a[l]<=(lk+rk)){
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}