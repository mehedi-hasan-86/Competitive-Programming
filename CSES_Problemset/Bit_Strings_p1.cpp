#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int M = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    lli n;
    cin >> n;

    lli ans = 1;
    for(int i=1; i<=n; i++){
        ans = (ans*2)%M;
    }
    cout << ans << endl;

    return 0;
}