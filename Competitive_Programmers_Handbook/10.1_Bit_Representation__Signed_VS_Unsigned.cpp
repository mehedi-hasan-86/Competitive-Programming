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
const int N = 1e6;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> x;

    cout <<"Signed: " << x << endl;
    unsigned int y = x;
    cout <<"Unsigned: " << y << endl;

    if(x<0){
    // Formula : unsigned = 2^32 - |signed|
    cout << "2^32  - " << abs(x) << " = " << (1LL<<32) - abs((lli)x) << endl;
    }

    

    return 0;
}