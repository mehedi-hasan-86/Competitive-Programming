#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        vector<vector<char>> s(n, vector<char> (m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> s[i][j];
            }
        }

        string tg = "vika";
        int idx = 0;

        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                if(tg[idx] == s[i][j]){
                    idx++;
                    break;
                }
            }
        }
        cout << (idx==4 ? "YES":"NO") << endl;

    }

    return 0;
}