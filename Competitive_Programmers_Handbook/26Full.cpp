#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

//=========== String Hashing ==============
struct StringHash {
    const lli A = 911382323;
    const lli B = 972663749; // small correction, fits in long long
    vector<lli> h, p;

    StringHash(const string &s) {
        int n = s.size();
        h.assign(n, 0);
        p.assign(n, 1);
        h[0] = s[0];
        for (int i = 1; i < n; i++) {
            h[i] = (h[i - 1] * A + s[i]) % B;
            p[i] = (p[i - 1] * A) % B;
        }
    }

    lli getHash(int l, int r) {
        if (l == 0) return h[r];
        return (h[r] - h[l - 1] * p[r - l + 1] % B + B) % B;
    }
};

//=========== Z-Algorithm ==============
vector<int> zAlgorithm(const string &s) {
    int n = s.size();
    vector<int> z(n, 0);
    int x = 0, y = 0;
    for (int i = 1; i < n; i++) {
        z[i] = max(0, min(z[i - x], y - i + 1));
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            x = i;
            y = i + z[i];
            z[i]++;
        }
    }
    return z;
}

//======== Pattern Matching ======
// Using Z-algorithm
vector<int> patternMatchZ(const string &text, const string &pattern) {
    string combined = pattern + "#" + text; // fixed variable name
    vector<int> z = zAlgorithm(combined);
    vector<int> pos;
    for (int i = 0; i < z.size(); i++) {
        if (z[i] == pattern.size()) {
            pos.push_back(i - pattern.size() - 1);
        }
    }
    return pos;
}

// Using Hashing
vector<int> patternMatchHash(const string &text, const string &pattern) {
    int n = text.size(), m = pattern.size();
    vector<int> pos;
    StringHash textHash(text);
    StringHash patternHash(pattern);
    lli ph = patternHash.getHash(0, m - 1);
    for (int i = 0; i <= n - m; i++) { // fixed "int =0" typo
        if (textHash.getHash(i, i + m - 1) == ph) {
            pos.push_back(i);
        }
    }
    return pos;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string text = "HATTIVATTI";
    string pattern = "ATT";

    // Pattern matching using Z-algorithm
    vector<int> posZ = patternMatchZ(text, pattern);
    cout << "Positions using Z-algorithm: ";
    for (int p : posZ) cout << p << " ";
    cout << endl;

    // Pattern matching using Hashing
    vector<int> posH = patternMatchHash(text, pattern);
    cout << "Positions using Hashing: ";
    for (int p : posH) cout << p << " ";
    cout << endl;

    return 0;
}