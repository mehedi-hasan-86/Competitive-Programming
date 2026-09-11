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

        int x,y;
        lli k;
        cin >> x >> y >> k;

        lli cnt = 0;
        while((y-x)>=x && k>0){
            cnt += (y%x);
            k--;
            y++,x++;
        }
        // cout << k << " ";
        if(k>0) cnt += (y-x)*(k);
        cout << cnt << endl;

    }

    return 0;
}