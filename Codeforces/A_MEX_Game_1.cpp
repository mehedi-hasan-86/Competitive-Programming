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
        vi cnt(n,0);
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            cnt[x]++;
        }

        int mex = 0;
        bool isA = true;
        while(mex<n){
            if(cnt[mex]==0){
                break;
            }

            if(cnt[mex]>=2){
                mex++;
                continue;
            }

            if(isA){
                mex++;
                isA = false;
            }else{
                break;
            }
        }
        cout << mex << endl;
    }

    

    return 0;
}