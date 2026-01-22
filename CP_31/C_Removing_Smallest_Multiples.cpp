#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<bool> bad(n+1, false);
    for(int i=1; i<=n; i++){
        if(s[i-1]=='1'){
            bad[i] = true;
        }
    }
     
    vector<bool> removed(n+1, false);
    lli answer = 0;

    for(int x = 1; x<=n; x++){
        if(bad[x]) continue;

        for(int v = x; v<=n; v+=x){
            if(bad[v]) break;

            if(!removed[v]){
                removed[v] = true;
                answer +=x;
            }
        }
    }
    cout << answer << endl;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}