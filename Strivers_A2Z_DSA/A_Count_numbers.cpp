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

    int n,q;
    cin >> n >> q;

    vi a;
    map<int,int> freq;
    while(q--){
        int z,x;
        cin >> z >> x;
        if(z==1){
            a.push_back(x);
            freq[x]++;
        }
        else if(z==2){
            cout << freq[x] << endl;
        }
    }

    return 0;
}