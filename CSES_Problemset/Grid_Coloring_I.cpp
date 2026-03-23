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

    int n,m;
    cin >> n >> m;

    vector<string> grid(n);
    for(int i=0; i<n; i++){
        cin >> grid[i];
    }
    vector<char> chars = {'A','B', 'C','D'};
    vector<string> ans = grid;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            vector<char> options;
            for(char c: chars){
                if( c != grid[i][j]) options.push_back(c);
            }

            for(char c : options){
                if((i>0 && ans[i-1][j]==c) || (j>0 && ans[i][j-1]==c)) 
                   continue;
                ans[i][j] = c;
                break;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << ans[i] << endl;
    }


    return 0;
}