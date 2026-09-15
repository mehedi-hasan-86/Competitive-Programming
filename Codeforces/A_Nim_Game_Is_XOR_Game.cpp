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
const int N = 1e6;
const lli MOD = 998244353;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl a(n);

        lli x = 0;
        int cNZ = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];

            x ^=a[i];
            if(a[i] != 0){
                cNZ++;
            }
        }

        if(cNZ<2){
                cout <<  0 << endl;
                continue;
            }

        if(x==0){
                cout << 1 << endl;
                continue;
        }
        lli ans = 0;
            for(int i=0; i<n; i++){
                if((a[i]^x)<=a[i]){
                    ans++;
                }
            }
        cout << ans%MOD << endl;
        }

    return 0;
}