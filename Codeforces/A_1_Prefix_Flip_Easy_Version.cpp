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

void solve(){
    int n;
    cin >> n;

    string a,b;
    cin >> a >> b;

    vi ans;

    for(int i=n-1; i>=0; i--){
        if(a[i]==b[i]) continue;

        if(a[0]==b[i]){
            ans.push_back(1);

            a[0] = (a[0]=='0' ? '1' : '0');
        }
        ans.push_back(i+1);
        reverse(a.begin(), a.begin()+i+1);

        for(int j=0; j<=i; j++){
            a[j] = (a[j] == '0' ? '1' : '0');
        }
    }
    cout << ans.size();
    for(int x : ans){
        cout <<" " << x ;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}