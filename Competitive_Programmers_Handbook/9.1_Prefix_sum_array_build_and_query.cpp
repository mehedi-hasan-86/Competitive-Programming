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

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vi pref(n,0);
    pref[0] = a[0];
    for(int i=1; i<n; i++){
        pref[i] = pref[i-1] + a[i];
    }

    cout <<"Array: ";
    for(int x : a) cout << x << " ";
    cout << endl;

    cout <<"Prefix: ";
    for(auto x : pref) cout << x << " ";
    cout << endl;

    auto rangeSum = [&](int a, int b){
        if(a==0) return pref[b];
        return pref[b]-pref[a-1];
    };
    cout << "sum(2,5) = " << rangeSum(2,5) << endl;
    cout << "sum(0,3) = " << rangeSum(0, 3) << "\n";
    cout << "sum(4,7) = " << rangeSum(4, 7) << "\n";

    return 0;
}