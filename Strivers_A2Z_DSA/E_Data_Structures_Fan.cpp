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

        vl a(n+1);
        vl pref(n+1,0);

        for(int i=1; i<=n; i++){
            cin >> a[i];
            pref[i] = pref[i-1]^a[i];
        }

        string s;
        cin >> s;

        lli x[2] = {0,0};
        for(int i=1; i<=n; i++){
            int group = s[i-1]-'0';

            x[group] ^=a[i];
        }
        int q;
        cin >> q;

        while(q--){
            int type;
            cin >> type;

            if(type==1){
                int l,r;
                cin >> l >> r;

                lli v = pref[r]^pref[l-1];

                x[0] ^=v;
                x[1] ^=v;
            }else{
                int g;
                cin >> g;

                cout << x[g] << " ";
            }
        }
        cout << endl;
    }

    

    return 0;
}