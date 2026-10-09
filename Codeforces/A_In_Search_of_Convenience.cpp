#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int x,y,r;
        cin >> x >> y >> r;

        cout << x+r<< " " << y << endl;
    }

    return 0;
}