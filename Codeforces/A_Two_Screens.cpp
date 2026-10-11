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
    cin >> t;

    while(t--){
        string s1,s2;
        cin >> s1 >> s2;

        int i = 0;
        while(i<s1.size() && i<s2.size() && s1[i]==s2[i]){
            i++;
        }
        int ans = min(s1.size()+s2.size(), s1.size()+s2.size()-i+1);
        cout << ans << endl;
    }

    return 0;
}