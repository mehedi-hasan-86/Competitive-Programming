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
        int n,m;
        cin >> n >> m;

        vi degree(n+1,0);
        for(int i=0; i<m; i++){
            int u,v;
            cin >> u >> v;
            degree[u]++;
            degree[v]++;
        }
        map<int,int> cnt;
        for(int i=1; i<=n; i++){
            cnt[degree[i]]++;
        }
        int x = 0,  y = 0;
        for(auto p : cnt){
            int d = p.first;
            int c = p.second;

            if(c == 1){
                x = d;
                break;
            }
        }
        if(x != 0){
            for(auto p : cnt){
                int d = p.first;
                int c = p.second;

                if(c==x){
                    y = d-1;
                    break;
                }
            }
        }else{
            for(auto p : cnt){
                int d = p.first;
                int c = p.second;

                if( d != 1){
                    x = c-1;
                    y = x-1;
                    break;
                }
            }
        }
        cout << x <<" " << y << endl;
        

    }
    

    return 0;
}