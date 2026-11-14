#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    int n = 12;
    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int ans = 0;
    int cnt = 0;
    int i = 0;
    while(k>ans && i<n){
        cnt++;
        ans += a[i++];
    }

    cout << cnt << endl;

    return 0;
}