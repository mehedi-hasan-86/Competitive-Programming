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

lli binpow(lli a, lli n){
    lli res = 1;

    while(n){
        if(n&1) res *=a;


        a *=a;
        n >>=1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        //lli x = n+1, y = n - k + 1;
        cout << binpow(2,n-k+1)  + 2LL*(k-1) << endl;

    }

    return 0;
}