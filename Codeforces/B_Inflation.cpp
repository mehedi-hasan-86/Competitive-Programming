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

        vl p(n);
        for(int i=0; i<n; i++){
            cin >> p[i];
        }
        lli sum = p[0];
        lli ans = 0;
        for(int i=1; i<n; i++){
            if(100LL*p[i]>k*sum){
                lli need = 100L*p[i] - k*sum;
                lli x = (need + k-1)/k;
                ans +=x;
                sum +=x;
            }
            sum +=p[i];
        }
        cout << ans << endl;
    }
    return 0;
}