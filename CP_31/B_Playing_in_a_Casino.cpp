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
        vector<vector<lli>> arr(n, vector<lli>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[i][j];
           }
        }

        lli total = 0;

        for(int k=0; k<m; k++){
            vector<lli> col(n);
            for(int i=0; i<n; i++){
                col[i] = arr[i][k];
            }
            sort(col.begin(), col.end());

            lli prefix = 0;
            for(int i=0; i<n; i++){
                total +=col[i]*i - prefix;
                prefix +=col[i];
            }
        }
        cout << total << endl;

        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         lli cur = 0;
        //         for(int k=0; k<m; k++){
        //             cur +=llabs(arr[i][k]-arr[j][k]);
        //         }
        //         total += cur;
        //     }
        // }
        // cout << total << endl;

    }

    return 0;
}