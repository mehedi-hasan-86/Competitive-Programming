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
        lli k;
        cin >> n >> k;

        vl a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        if(k>=3){
            cout << 0 << endl;
            continue;
        }
        vl b = a;
        sort(b.begin(), b.end());
        if(k==1){
            lli ans = b[0];
            for(int i=1; i<n; i++){
                ans = min(ans, b[i]-b[i-1]);
            }
            cout << ans << endl;
        }

       
        if(k==2){
            vl res;
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    res.push_back(abs(a[i]-a[j]));
                }
            }
        sort(res.begin(), res.end());
        sort(a.begin(), a.end());

        lli ans = a[0];
        for(auto x : res){
            ans = min(ans,x);
        }
        for(auto x : res){
            auto it = lower_bound(a.begin(), a.end(),x);

            if(it != a.end()){
                ans = min(ans, abs(x- *it));
            }
            if(it != a.begin()){
                it--;
                ans = min(ans, abs(x- *it));
            }
        }

        cout << ans << endl;
        }
        
        
    }

    return 0;
}