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

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vl r(n,0);
        vl l(n,0);

        for(int i=1; i<n; i++){
            bool isC;
            if(i==1){
                isC = true;
            }else{
                lli lG = a[i-1]-a[i-2];
                lli rG = a[i] - a[i-1];
                isC = rG<lG;
            }

            r[i] = r[i-1] + (isC ? 1 : a[i]-a[i-1]);
        }

        for(int i=n-2; i>=0; i--){
            bool isC;
            if(i==n-2){
                isC = true;
            }else{
                lli lG = a[i+1] - a[i];
                lli rG = a[i+2] - a[i+1];

                isC = lG < rG;
            }
            l[i] = l[i+1] + (isC ? 1:a[i+1]-a[i]);
        }
        int m;
        cin >> m;

        while(m--){
            int x,y;
            cin >> x >> y;
            --x;
            --y;

            if(x<y) cout << r[y] - r[x] << endl;
            else cout << l[y] - l[x] << endl;
        }
    }

    return 0;
}