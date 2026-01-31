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
    char c;
    cin >>  n >> c;

    string s;
    cin >> s;

    bool all_c = true;
    for(char ch : s){
        if(ch != c){
            all_c = false;
            break;
        }
    }

    if(all_c){
        cout << 0 << endl;
        return;
    }

    for(int x=1; x<=n; x++){
        bool ok = true;
        for(int i=x; i<=n; i+=x){
            if(s[i-1] != c){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << 1 << endl;
            cout << x << endl;
            return;
        }
    }

    cout << 2 << endl;
    cout << n-1 << " " << n << endl;
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