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
    cin  >> t;

    while(t--){
        lli n;
        int a,b,c;
        cin >> n >> a >> b >> c;
        lli val = a+b+c;
        lli z = n/val;
        lli p = n- z*val; // remaining 
        lli ans =  z*3 ;


        // cout << p << endl;
        // cout <<endl;
        // cout << z << endl;
        vi m({a,b,c});

        // // lli store = n;

        // lli ans = 0;
        // lli p = 0;
        // while(n>0){
        //      p *=val;
        //     n -=val;
        //     ans +=3;
        //     p +=val;
        // }
        // // cout << n << endl;
        int idx = 0;
        while(p>0){
            p -=m[idx];
            idx++;
            ans++;
        }
        cout << ans << endl;


    }

    return 0;
}