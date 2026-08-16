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
    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vi LOG(n+1,0);
    for(int i=2; i<=n; i++){
        LOG[i] = LOG[i/2] + 1;
    }

    int K  = LOG[n] + 1;
    vector<vi> st(K, vi (n));
    for(int i=0; i<n; i++){
        st[0][i] = a[i];
    }
    for(int k=1; k<K; k++){
        for(int i=0; i<=n-(1<<k); i++){
            st[k][i] = min(st[k-1][i], st[k-1][i+(1<<(k-1))]);
        }
    }
    cout <<"Sparse Table (minimum) : \n";
    for(int k=0; k<K; k++){
        cout << "k= " << k << " (len=2^k" << k << "): ";
        for(int i=0; i<=n-(1<<k); i++){
            cout << st[k][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Range minimum quer
    auto rangeMin = [&](int a, int b){
        int len = b-a+1;
        int k = LOG[len];
        return min(st[k][a], st[k][b-(1<<k)+1]);
    };
    cout <<"min(1,6) = " << rangeMin(1,6) << endl;
    cout << "min(2,5) = " << rangeMin(2,5) << endl;
    cout << "min(0,7)" << rangeMin(0,7) << endl;


    return 0;
}