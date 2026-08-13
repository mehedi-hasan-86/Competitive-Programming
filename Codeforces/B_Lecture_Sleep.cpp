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

    int n,k;
    cin >> n >> k;

    vi a(n), t(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> t[i];

    int ans = 0;
    for(int i=0; i<n; i++){
        if(t[i]==1){
            ans += a[i];
       }
    }
    int window = 0;
    for(int i=0; i<k; i++){
        if(t[i]==0){
            window +=a[i];
        }
    }
    int mx = window;
    for(int i=k; i<n; i++){
        if(t[i]==0){
            window += a[i];
        }
        if(t[i-k]==0){
            window -=a[i-k];
        }
        mx = max(window, mx);
    }
    cout << mx + ans << endl;
    return 0;
}