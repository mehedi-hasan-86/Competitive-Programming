#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    lli t;
    cin >> t;

    while(t--){
        lli a,b,n;
        cin >> a >> b >> n;
      if (b >= a) {
            cout << 1 << "\n";
        }
        else {
            lli k = a / b;
            if (n <= k) cout << 1 << "\n";
            else cout << 2 << "\n";
        }
    }

    return 0;
}