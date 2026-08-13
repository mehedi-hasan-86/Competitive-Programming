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

    int x = 14; // 1110
    cout << "x = " << "1110" << endl;

    cout << "x<<2 = " << (x<<2) << " 111000 = 14 * 4\n";
    cout <<"x>>2 = " << (x>>2) << " 11 = 14/4 \n\n";

    int y = 49;
    cout << "y = " << y << " (110001)\n";
    cout << "y>>3 = " << (y>>3) << " (110) = 49/8\n";

    return 0;
}