
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--) {
        string s, t;
        cin >> s >> t;

        int cnt[26] = {0};

        for(char c : s) {
            cnt[c-'A']++;
        }

        for(char c : t) {
            cnt[c-'A']--;
        }

        bool isC = true;

        for(int i = 0; i < 26; i++) {
            if(cnt[i] < 0) {
                isC = false;
                break;
            }
        }

        if(!isC) {
            cout << "NO" << endl;
            continue;
        }

        string ans = "";

        for(char c : s) {
            if(cnt[c-'A'] > 0) {
                cnt[c-'A']--;
            }
            else {
                ans += c;
            }
        }

        cout << (ans == t ? "YES" : "NO") << endl;
    }

    return 0;
}
