#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,t;
    cin >> n >> t;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    isC =  search(a,t);
    cout << (isC ? "True":"False") << endl;

    return 0;
}