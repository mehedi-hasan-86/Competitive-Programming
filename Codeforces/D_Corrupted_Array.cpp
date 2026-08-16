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
typedef pair<int, int> pi;
typedef vector<long long> vll;
typedef vector<pair<int, int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e6;

void solve(){
    int n;
    cin >> n;

    vll b(n + 2);
    lli sum = 0;
    for(auto &x : b){
        cin >> x;
        sum += x;
    }
    sort(b.begin(), b.end());
    if(sum - b[n + 1] - b[n] == b[n]){
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
        return;
    }
    lli need = sum - 2 * b[n + 1];
    if(need >= 0){
        for(int i = 0; i < n + 1; i++){
            if(b[i] == need){
                for(int j = 0; j < n + 1; j++){
                    if(j != i){
                        cout << b[j] << " ";
                    }
                }
                cout << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}