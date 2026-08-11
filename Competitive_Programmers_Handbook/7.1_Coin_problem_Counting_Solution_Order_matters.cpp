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

    vi coins = {1,3,4};
    int n = 5;

    vi cnt(n+1,0);
    cnt[0] = 1;

    for(int x=1; x<=n; x++){
        for(int c : coins){
            if(x>=c){
                cnt[x] = (cnt[x]+ cnt[x-c]) %MOD;
            }
        }
    }
    cout << n << "-> " << cnt[n] << endl;

    return 0;
}