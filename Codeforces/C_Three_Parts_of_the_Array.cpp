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

    vi d(n);
    for(int i=0; i<n; i++){
        cin >> d[i];
    }

    int l = 0, r = n-1;
    lli sum1 = 0, sum2 = 0;
    lli ans = 0;
    while(l<=r){
        if(sum1 <= sum2){
            sum1 += d[l];
            l++;
        }else{
            sum2 += d[r];
            r--;
        }
        if(sum1==sum2){
            ans = max(ans, sum1);
        }
    }
    cout << ans << endl;

    return 0;
}