#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const lli MOD = 1e9 + 7;

lli power(lli a, lli b){
    lli res = 1;
    while(b>0){
        if(b&1) res = (res*a)%MOD;
        a = (a*a)%MOD;
        b >>=1;
    }
    return res;
}

lli cntGoodNum(lli n){
    lli evenCnt = (n+1)/2;
    lli oddCnt = n/2;

    lli evenCh = power(5,evenCnt);
    lli oddCh = power(4,oddCnt);

    return (evenCh *oddCh)%MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    lli n;
    cin >> n;

    cout << cntGoodNum(n) << endl;

    return 0;
}