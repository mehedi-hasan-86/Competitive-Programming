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

//----------------------------------------
// 1. Catalan using DP
//----------------------------------------
lli catalanDP(int n){
    vector<lli> c(n+1,0);
    c[0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            c[i] += c[j] * c[i-j-1];
        }
    }
    return c[n];
}

//----------------------------------------
// 2. Catalan using Binomial
//----------------------------------------
lli catalanBinomial(int n){
    lli res = 1;
    for(int i = 0; i < n; i++){
        res = res * (2*n - i) / (i + 1);
    }
    return res / (n + 1);
}

//----------------------------------------
// 3. Modular Exponentiation
//----------------------------------------
lli modpow(lli a, lli b){
    lli res = 1;
    while(b){
        if(b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

//----------------------------------------
// 4. Catalan with Modulo
//----------------------------------------
lli catalanMod(int n){
    vector<lli> fact(2*n+1);
    fact[0] = 1;

    for(int i = 1; i <= 2*n; i++)
        fact[i] = fact[i-1] * i % MOD;

    lli ans = fact[2*n];
    ans = ans * modpow(fact[n], MOD-2) % MOD;
    ans = ans * modpow(fact[n], MOD-2) % MOD;
    ans = ans * modpow(n+1, MOD-2) % MOD;

    return ans;
}

//----------------------------------------
// 5. Generate Valid Parentheses
//----------------------------------------
void generateParentheses(int n, int open, int close, string s){
    if(sz(s) == 2*n){
        cout << s << endl;
        return;
    }
    if(open < n)
        generateParentheses(n, open+1, close, s + "(");

    if(close < open)
        generateParentheses(n, open, close+1, s + ")");
}

//----------------------------------------
// MAIN
//----------------------------------------
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    cout << catalanDP(n) << endl;
    cout << catalanBinomial(n) << endl;
    cout << catalanMod(n) << endl;

    generateParentheses(n, 0, 0, "");

    return 0;
}
