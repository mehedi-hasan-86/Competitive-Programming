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

    int x = 43; // 101011
    cout << "x = " << x << " (101011)\n\n";

    // Check kth bit
    int k = 3;
    cout << "Bit " << k << " of x: " << ((x&(1<<k)) ? 1 : 0) << endl;

    // Set kth bit to 1;
    k = 2;
    cout << "Set bit " << k <<": " << (x |(1<<k)) << endl;

    // Set kth bit to 0
    k = 3;
    cout <<"Clear bit " << k << ": " << (x& ~(1<<k)) << endl;

    // Toggle kth bit
    k = 4;
    cout <<"Toggle bit " << k << ": " << (x^(1<<k)) << endl << endl;

    // Remove last 1 bit
    cout << "x & (x-1) = " << (x & (x-1)) << " (removes last 1)\n";

    // Extract last 1 bit 
    cout << "x & -x = " << (x & -x) << " (extracts last 1)\n";

    // Check power of 2
    int y = 16;
    cout << endl << y << " is power of 2 : " << ((y&(y-1))==0) << endl;


    return 0;
}