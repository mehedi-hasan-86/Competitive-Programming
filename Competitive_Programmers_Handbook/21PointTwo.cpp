#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;
const int MOD = 1e9+7;
const int N = 1e6+5;

//-----------------------------
// 1. Modular Exponentiation  
//-----------------------------
lli modpow(lli x, lli n, lli m){
    lli res  = 1;
    x %=m;

    while(n){
        if(n&1){
            res = (res*x)%m;
        }
        x = (x*x)%m;
        n >>=1;
    }
    return res;
}

//----------------------------------
// 2. Modular Inverse
//----------------------------------
lli modInverse(lli x, lli m){
    return modpow(x,m-2, m);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    lli x,n,m;
    cin >> x >> n >> m;

    cout << modpow(x,n,m) << endl;
    cout << modInverse(x,m);
    return 0;
}