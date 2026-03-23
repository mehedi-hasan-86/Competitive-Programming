#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()

using vl = vector<lli>;
using vi = vector<int>;

const int MAX = 1e6 + 5;

string s;

bool check_possibility(int cur, int c, pair<int,int> mode) {
    int rem, cnt;
    if(mode.second == c) {
        rem = sz(s) - cur - 2;
        cnt = mode.first - 1;
    } else {
        rem = sz(s) - cur - 1;
        cnt = mode.first;
    }
    int req = (rem + 1) / 2;
    return cnt <= req;
}

void solve() {
    cin >> s;
    string res = "";
    int n = sz(s);
    int freq[26] = {0};

    for(auto c : s) freq[c - 'A']++;

    for(int i = 0; i < n; i++) {
        pair<int,int> mode = {-1, 0};
        pair<int,int> mode_2 = {-1, 0};

        for(int j = 0; j < 26; j++) {
            if(freq[j] == 0) continue;
            if(make_pair(freq[j], j) > mode) {
                mode_2 = mode;
                mode = {freq[j], j};
            } else if(make_pair(freq[j], j) > mode_2) {
                mode_2 = {freq[j], j};
            }
        }

        bool possible = false;
        for(int j = 0; j < 26; j++) {
            if(freq[j] == 0 || (sz(res) != 0 && res.back() == j + 'A')) continue;
            if(!check_possibility(i, j, mode) || !check_possibility(i, j, mode_2)) continue;

            possible = true;
            res += 'A' + j;
            freq[j]--;
            break;
        }

        if(!possible) {
            cout << -1 << endl;
            return;
        }
    }

    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();

    return 0;
}