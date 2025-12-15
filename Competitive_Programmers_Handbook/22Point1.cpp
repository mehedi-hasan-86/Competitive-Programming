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


//---------------------------
// 1. Factorial (for nCr and nPr)
//-----------------------------

vector<lli> fact;
void computeFactorials(int n){
    fact.resize(n+1);
    fact[0] = 1;
    for(int i=1; i<=n; i++) fact[i] = fact[i-1]*i;
}

//----------------------------------
// 2. Binomial Coefficient nCr
//---------------------------------
lli nCr(lli n, lli r){
    if(r<0 || r > n) return 0;
    return fact[n]/(fact[r]*fact[n-r]);
}

//------------------------------------
// 3. Multinomial Coefficient
//--------------------------------

lli multinomial(vector<int> k){
    lli n = 0, res = 1;
    for(int x : k) n +=x;
    res = fact[n];
    for(int x : k) res /= fact[x];
    return res;
}

//----------------------------------
// 4. Boxes & Balls Scenarios
//----------------------------------

lli boxesScenario1(int n, int k){
    return nCr(n,k);
}

lli boxesScenario2(int n, int k){
    return nCr(n+k-1,k);
}

lli boxesScenario3(int n, int k){
    return nCr(n-k+1, k);
}

lli sumOfPositiveIntegers(int n){
    return 1LL << (n-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

        int n = 5, k = 2;

    computeFactorials(20); // precompute factorials

    cout << "Scenario 1 (max 1 ball per box): " << boxesScenario1(n,k) << "\n";
    cout << "Scenario 2 (multiple balls per box): " << boxesScenario2(n,k) << "\n";
    cout << "Scenario 3 (max 1 ball, no adjacent): " << boxesScenario3(n,k) << "\n";

    cout << "nCr(" << n << "," << k << ") = " << nCr(n,k) << "\n";

    vector<int> mcoef = {2,2,1}; // example multinomial
    cout << "Multinomial Coefficient: " << multinomial(mcoef) << "\n";

    int sum_n = 4;
    cout << "Number of ways to sum " << sum_n << " using positive integers: " 
         << sumOfPositiveIntegers(sum_n) << "\n";

    return 0;
}