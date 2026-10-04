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

    int n,k;
    cin >> n >> k;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int sum  = 0;
    for(int i=0; i<k; i++){
        sum +=a[i];
    }
    int l = k-1, r = n-1;
    int ans = sum;

    while(l>=0){
        sum -=a[l];
        sum += a[r];
        l--;
        r--;
        ans = max(ans, sum);
    }
    cout << ans << endl;
   



    return 0;
}