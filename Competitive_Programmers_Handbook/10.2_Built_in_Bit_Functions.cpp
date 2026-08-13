#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
#define endl '\n'
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int  x = 5328;

    // 5328 in binary : 00000000000000000001010011010000

    cout << "x = " << x << endl;
    cout <<"__builtin_clz(x) = " << __builtin_clz(x) << endl;
    cout << "__builtin_ctz(x) = " << __builtin_ctz(x) << endl;
    cout << "__builtin_popcount(x) = " << __builtin_popcount(x) << endl;
    cout <<"__builtin_parity(x) = " << __builtin_parity(x) << endl;


    // Long long versions
    lli y = 123456789123456789LL;
    cout << "\n__builtin_clzll(y) = " << __builtin_clzll(y) << "\n";
    cout << "__builtin_ctzll(y) = " << __builtin_ctzll(y) << "\n";
    cout << "__builtin_popcountll(y) = " << __builtin_popcountll(y) << "\n";


    return 0;
}