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
        int m;
        cin >> m;

        vi a(m), b(m);
        for(int i=0; i<m; i++){
            cin >> a[i];
        }
        for(int j=0; j<m; j++){
            cin >> b[j];
        }

        vi pref_a(m);
        pref_a[0] = a[0];
        for(int i=1; i<m; i++){
            pref_a[i] =  pref_a[i-1] + a[i];
        }

        vi pref_b(m);
        pref_b[0] = b[0];
        for(int i=1; i<m; i++){
            pref_b[i] =  pref_b[i-1] + b[i];
        }
        vi mx;
        for(int k=0; k<m; k++){
            int sum_a = pref_a[m-1]-pref_a[k];
            
            int sum_b;
            if(k==0){
                sum_b = 0;
            }else{
                sum_b = pref_b[k-1];
            }
            mx.push_back(max(sum_a,sum_b));
        }
        cout << *min_element(all(mx)) << endl;
    }
    return 0;
}