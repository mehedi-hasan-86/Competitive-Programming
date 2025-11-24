#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 200005;
const int LOG = 20;

int st[N][LOG];
int lg[N];


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vi a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
        st[i][0] = a[i];
    }
    lg[1] = 0;
    for(int i=2; i<=n; i++){
        lg[i] = lg[i/2] + 1;
    }

    for(int j=1; j<LOG; j++){
        for(int i=0; i+(1<<j) <=n; i++){
            st[i][j] = min(st[i][j-1], st[i+(1<<(j-1))][j-1]);
        }
    }

    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;

        int len = r-l+1;
        int k = lg[len];

        int ans = min(st[l][k], st[r-(1<<k)+1][k]);

        cout << ans << endl;
    }

    return 0;
}