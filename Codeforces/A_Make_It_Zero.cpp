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

    while (t--){
        int n;
        cin >> n;

        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
        }

        if (n % 2 == 0){
            cout << 2 << '\n';
            cout << 1 << " " << n << '\n';
            cout << 1 << " " << n << '\n';
        }
        else{
            cout << 4 << '\n';
            cout << 1 << " " << n - 1 << '\n';
            cout << 2 << " " << n << '\n';
            cout << 1 << " " << n - 1 << '\n';
            cout << 2 << " " << n << '\n';
        }
    }

    return 0;
}