#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
// const int Mx = 20;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int a,b,c,m;
        cin >> a >> b >> c >> m;

        vi aa(m+1,0), bb(m+1,0), cc(m+1,0);
        for(int i=1; a*i<=m; i++) aa[a*i] = a*i;
        for(int i=1; b*i<=m; i++) bb[b*i] = b*i;
        for(int i=1; c*i<=m; i++) cc[c*i] = c*i;


    // cout << "aa array: ";
    // for (int i = 1; i<=m; i++) cout << aa[i] << " ";
    // cout << "\n";

    // cout << "bb array: ";
    // for (int i = 1; i <= m; i++) cout << bb[i] << " ";
    // cout << "\n";

    // cout << "cc array: ";
    // for (int i = 1; i <= m; i++) cout << cc[i] << " ";
    // cout << "\n";

    // cout << endl;

    vi res(m+1,0);
    for(int i=1; i<=m; i++){
    int cnt = 0;
    if(aa[i]) cnt++;
    if(bb[i]) cnt++;
    if(cc[i]) cnt++;

    if(cnt == 3) res[i] = 2;
    else if(cnt == 2) res[i] = 3;
    else if(cnt == 1) res[i] = 6;
    else res[i] = 0;
}

    //  cout << "res array: ";
    // for(int i=1; i<=m; i++) cout << res[i] << " ";
    // cout << "\n";
    // cout << endl;
        lli ans_a = 0, ans_b = 0, ans_c = 0;
        for(int i=1; i<=m; i++){ 
            if(aa[i]){
                ans_a += res[i];
            }
            if(bb[i]){
                ans_b += res[i];
            }
            if(cc[i]){
                ans_c += res[i];
            }
        }

        cout << ans_a << " " << ans_b << " " << ans_c << endl;


    }

    return 0;
}