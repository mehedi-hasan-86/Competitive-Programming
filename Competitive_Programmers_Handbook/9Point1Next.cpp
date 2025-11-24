#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    vector<vl> a(n, vl (m));
    vector<vl> pref(n+1, vl (m+1,0));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            pref[i][j] = a[i-1][j-1] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
        }
    }

    int q;
    cin >> q;

    while( q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2; // this : 0-indexed

        //convert to 1 index
        x1++, y1++;
        x2++, y2++;

        long long sum = pref[x2][y2]-pref[x1-1][y2]- pref[x2][y1-1] + pref[x1-1][y1-1];
        cout << sum << endl;


    }

    return 0;
}