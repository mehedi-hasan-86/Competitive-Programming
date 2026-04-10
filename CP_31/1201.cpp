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
        
        vl a(n), b(n), c(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        for(int i=0; i<n; i++) cin >> c[i];

        vector<pair<lli, int>> A,B,C;
        for(int i=0; i<n; i++){
            A.push_back({a[i],i});
            B.push_back({b[i],i});
            C.push_back({c[i],i});
        }
        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());
        sort(C.rbegin(), C.rend());

    

        lli ans = 0;
        for(int x=0; x<3; x++){
            for(int y=0; y<3; y++){
                if(A[x].second==B[y].second) continue;
                for(int z = 0; z<3; z++){
                  if(C[z].second==B[y].second || C[z].second== A[x].second) continue;
                  ans = max(ans, A[x].first+B[y].first+C[z].first);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}