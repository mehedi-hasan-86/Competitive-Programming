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
    cin >>t;
    
    while(t--){
        int n;
        cin >> n;

        vl a(n), b(n), c(n);
        for(int i=0; i<n; i++) cin  >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        for(int i=0; i<n; i++) cin >> c[i];

        vector<pair<lli, int>> A,B,C;
        for(int i=0; i<n; i++){
            A.push_back({a[i], i});
            B.push_back({b[i], i});
            C.push_back({c[i], i});
        }

        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());
        sort(C.rbegin(), C.rend());

        lli ans = 0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(A[i].second == B[j].second) continue;
                for(int k=0; k<3; k++){
                   if(C[k].second == B[j].second || C[k].second == A[i].second) continue;
                   ans = max(ans, A[i].first + B[j].first + C[k].first);
                }
            }
        }
        cout << ans << endl;
        






        // Bruteforces way

        // lli ans = 0;
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         if(i==j) continue;
        //         for(int k = 0; k<n; k++){
        //             if(k == i || k == j) continue;
        //             ans = max(ans,(lli)(a[i]+b[j]+c[k])); 
        //         }
        //     }
        // }
        // cout << ans << endl;



    }

    return 0;
}