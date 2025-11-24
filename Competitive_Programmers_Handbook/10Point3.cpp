#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 0;
    x |= (1<<1);
    x |= (1<<3);
    x |= (1<<4);
    x |= (1<<8);

    cout << "x size = " << __builtin_popcount(x) << "\n";
    cout << "x elements: ";
    for (int i = 0; i < 32; i++) if (x & (1<<i)) cout << i << " ";
    cout << "\n";

    int y = (1<<3)|(1<<6)|(1<<8)|(1<<9);

    int u = x | y;
    int inter = x & y;
    int diff = x & (~y);

    cout << "Union: ";
    for (int i = 0; i < 32; i++) if (u & (1<<i)) cout << i << " ";
    cout << "\n";

    cout << "Intersection: ";
    for (int i = 0; i < 32; i++) if (inter & (1<<i)) cout << i << " ";
    cout << "\n";

    cout << "Difference: ";
    for (int i = 0; i < 32; i++) if (diff & (1<<i)) cout << i << " ";
    cout << "\n";

    int n = 4;
    cout << "All subsets:\n";
    for (int b = 0; b < (1<<n); b++) {
        for (int i = 0; i < n; i++) if (b & (1<<i)) cout << i << " ";
        cout << "\n";
    }

    int k = 2;
    cout << "Subsets of size 2:\n";
    for (int b = 0; b < (1<<n); b++) {
        if (__builtin_popcount(b) == k) {
            for (int i = 0; i < n; i++) if (b & (1<<i)) cout << i << " ";
            cout << "\n";
        }
    }

    cout << "Subsets of x:\n";
    int sub = 0;
    do {
        for (int i = 0; i < 32; i++) if (sub & (1<<i)) cout << i << " ";
        cout << "\n";
        sub = (sub - x) & x;
    } while (sub != 0);

    return 0;
}