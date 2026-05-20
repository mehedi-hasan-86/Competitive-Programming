#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli lcm(lli a, lli b){
    return a/ __gcd(a,b)*b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        lli a,b,c,m; cin >>a >> b >> c >> m;
        lli A = m/a, B = m/b, C = m/c;
        lli AB = m/lcm(a,b);
        lli AC = m/lcm(a,c);
        lli BC = m/lcm(b,c);
        lli ABC = m/lcm(a,lcm(b,c));

        lli wa = 6*A -3*(AB+ AC) +2*ABC;
        lli wb = 6*B -3*(AB+BC) +2*ABC;
        lli wc = 6*C -3*(AC+BC)+2*ABC;

        cout << wa << " " << wb << " " << wc << endl;
    }

    return 0;
}