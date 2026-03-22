#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli f(lli n) {
    lli r = n * n * (n * n - 1);
    r -= 4 * 2;
    r -= 8 * 3;
    r -= 4 * 4;
    r -= (n - 4) * 4 * 4;
    r -= (n - 4) * 4 * 6;
    r -= (n - 4) * (n - 4) * 8;
    return r / 2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << f(i) << "\n";
    }

    return 0;
}