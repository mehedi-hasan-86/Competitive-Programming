//Need to see the next time
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int M = 1e9 + 7;

lli mod_pow(lli base, lli exp){

    lli res = 1;
    while(exp){
        if(exp&1){
            res = (res*base)%M;
        }
        base = (base*base)%M;
        exp >>=1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    lli n;
    cin >> n;

    cout << mod_pow(2,n) << endl;

    // cout << ((1<<n) %M) << endl;

    return 0;
}