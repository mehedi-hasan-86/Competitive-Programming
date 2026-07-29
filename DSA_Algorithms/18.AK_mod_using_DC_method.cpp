#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli modPow(lli A, lli K, lli M){
    if(K==0) return 1;

    lli half = modPow(A,K/2, M);
    lli res = (half*half)%M;

    if(K%2==1)  res = (res*A)%M;

    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    lli A, K,M;
    cin >> A >> K >> M;

    cout << modPow(A,K,M) << endl;

    return 0;
}