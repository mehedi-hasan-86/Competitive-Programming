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
        int n;
        cin >> n;

        vector<vector<int>> a(n,vector<int>(n));
        int x = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                a[i][j] = x++;
            }
        }

        vector<vector<int>> b(n+2, vector<int>(n+2,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                b[i+1][j+1] = a[i][j];
            }
        }

        lli mx = 0;
        for(int i=0; i<n+2; i++){
            for(int j=0; j<n+2; j++){
                if(b[i][j] !=0){
                     lli val = b[i][j] + b[i-1][j] + b[i][j+1] + b[i+1][j] + b[i][j-1];
                     mx  = max(val, mx);
                }
               
            }
        }
        cout << mx << endl;
    }

    return 0;
}