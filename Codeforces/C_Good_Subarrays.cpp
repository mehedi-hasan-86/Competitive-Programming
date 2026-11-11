#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<int,int> freq;
    int prefix = 0;
    lli ans = 0;

    freq[0] = 1;
    for(int i=0;  i<n; i++){
        prefix += (s[i]-'0')-1;
        ans += freq[prefix];
        freq[prefix]++;
    }
    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    

    return 0;
}