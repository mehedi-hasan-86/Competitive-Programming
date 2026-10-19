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

    vi a(n);
    int mn = INT_MAX;
    for(int i=0; i<n; i++){
       cin >> a[i]; 
       mn = min(mn, abs(a[i]));
    }
    cout << mn << endl;


    return 0;
}