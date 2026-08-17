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

    int t;
    cin >> t;

    while(t--){

    int n;
    cin >> n;

    vll a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vll b;
    for(int i=0; i<min(5,n); i++){
        b.push_back(a[i]);
    }
    for(int i=max(5,n-5); i<n; i++ ){
        b.push_back(a[i]);
    }

    lli ans = LLONG_MIN;
    int m = b.size();
    for(int i=0; i<m; i++){
        for(int j = i+1; j<m; j++ ){
            for(int k=j+1; k<m; k++){
                for(int l = k+1; l<m; l++){
                    for(int r = l+1; r<m; r++){
                        lli product  = b[i]*b[j]*b[k]*b[l]*b[r];
                        ans = max(ans, product);
                    }
                }
            }
        }
    }
    cout << ans << endl;

}


    return 0;
}