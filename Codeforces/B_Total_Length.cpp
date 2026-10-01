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
typedef vector<long long> vl;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli n, s;
    cin >> n >> s;

    vector<lli> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    lli l = 0, sum = 0, ans = 0;
    for (lli r = 0; r < n; r++)
    {
        sum += a[r];

        while (sum > s){
            sum -= a[l];
            l++;
        }

        lli len = r - l + 1;
        ans += (len * (len + 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}