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
    while(t--){
        int a,b;
        cin >> a>> b;
        cout <<(a<=b ? -1 : min(b,a-b)) << endl;
    }
    return 0;
}