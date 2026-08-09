#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;

lli sum_1_to_n(int n){
    return 1LL*n*(n+1)/2;
}

lli sum_squares(int n){
    return 1LL*n*(n+1)*(2*n+1)/6;
}

long long sum_cubes(int n) {
    long long s = sum_1_to_n(n);
    return s * s;
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << sum_1_to_n(10) << "\n";   // 55
    cout << sum_squares(10) << "\n";  // 385
    cout << sum_cubes(10) << "\n";    // 3025

    

    return 0;
}