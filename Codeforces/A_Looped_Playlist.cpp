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

    int n;
    lli p;
    cin >> n >> p;

    vl a(n);
    lli total = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        total +=a[i];
    }
    lli full = (p-1)/total;
    lli need = p - full*total;

    vl b(2*n);
    for(int i=0; i<2*n; i++){
        b[i] = a[i%n];
    }
    lli sum = 0;
    int l = 0;

    int bestLen = INT_MAX;
    int bestStart = 0;

    for(int r = 0; r<n*2; r++){
        sum += b[r];

        while(sum >= need){
            int len = r-l+1;
            if(len < bestLen){
                bestLen  = len;
                bestStart = l;
            }

            sum -=b[l];
            l++;
        }
    }
    lli ans = full*n + bestLen;
    int start = bestStart%n + 1;
    cout << start << " " << ans << endl;

    return 0;
}