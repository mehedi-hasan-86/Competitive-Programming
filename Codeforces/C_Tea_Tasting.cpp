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
        cin >> n;

        vl a(n+1), b(n+1);
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        for(int i=1; i<=n; i++){
            cin >> b[i];
        }

        vl pref(n+1,0);
        for(int i=1; i<=n; i++){
            pref[i] = pref[i-1]+b[i];
        }

        vl full(n+2,0);
        vl partial(n+2,0);

        for(int i=1; i<=n; i++){
            lli target = a[i]+pref[i-1];
            int pos = upper_bound(pref.begin()+i, pref.begin()+n+1, target)-pref.begin();

            full[i]++;
            full[pos]--;

            if(pos<=n){
                lli used =  pref[pos-1]-pref[i-1];
                partial[pos] +=a[i]-used;
            }
        }
        int cnt = 0;
        for(int i=1; i<=n; i++){
            cnt +=full[i];

            lli ans = cnt*b[i]+partial[i];
            cout << ans << " ";
        }
        cout << endl;
    }

    

    return 0;
}