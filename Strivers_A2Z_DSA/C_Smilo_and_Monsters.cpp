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

void solve(){
    int n;
    cin >> n;

    vl a(n);
    lli sum = 0;
    
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum +=a[i];
    }
    sort(a.begin(), a.end());
    int l =0, r =n-1;
    lli  x= 0;
    lli ans = 0;

    while(l<r){
        lli need = a[r]-x;
        if(a[l]<=need){
            x +=a[l];
            ans +=a[l];
            l++;
        }else{
            lli take = need;
            a[l] -=take;

            x +=take;
            ans +=take;
        }

        if(x==a[r]){
            ans++;
            r--;
            x = 0;
        }
    }

    // if(l==r){
    //     lli  k = (a[l]-x)/2;
    //     ans +=k;
    //     x +=k;

    //     a[l] -=k;

    //     if(x>0){
    //         ans++;
    //         a[l] -=x;
    //     }
    //     ans +=a[l];
    // }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}