#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
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

        
    int n,q;
    cin >> n >> q;

    string a , b;
    cin >> a >> b;

    int pa[n+1][26] = {};
    int pb[n+1][26] = {};

    for(int i=1; i<=n; i++){
        for(int j=0; j<26; j++){
            pa[i][j] = pa[i-1][j];
            pb[i][j] = pb[i-1][j];
        }
        pa[i][a[i-1]-'a']++;
        pb[i][b[i-1]- 'a']++;
    }

    while(q--){
        int l,r;
        cin >> l >> r;

        int ans = 0;
        for(int j=0; j<26; j++){
            int ca = pa[r][j]-pa[l-1][j];
            int cb = pb[r][j]-pb[l-1][j];

            if(ca>cb){
                ans += ca-cb;           
             }
        }
        cout << ans << endl;
    }

    }


    return 0;
}