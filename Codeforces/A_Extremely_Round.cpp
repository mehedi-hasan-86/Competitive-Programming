#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;

        int n = s.length();
        int ans = (n-1)*9 + (s[0]-'0');
        cout << ans << endl;

    

    }

    return 0;
}