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
        int n,k;
        cin >> n >> k;

        vl a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        if(k>=3){
            cout << 0 << endl;
            continue;
        }
        sort(a.begin(), a.end());
        vl res;
        for(int i=1; i<n; i++){
            res.push_back(a[i]-a[i-1]);
        }

        for(int i=0; i<res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
        if(k==1){  
            cout << *min_element(res.begin(), res.end());
            continue;
        }
 

    }

    return 0;
}