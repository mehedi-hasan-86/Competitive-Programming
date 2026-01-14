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

        vi a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        n = unique(a.begin(), a.end())- a.begin();
        lli ans = n;
        for(int i=0; i<n-2; i++){
            ans -=(a[i]<a[i+1] && a[i+1]<a[i+2]);
            ans -=(a[i]>a[i+1] && a[i+1]>a[i+2]);

        }
        cout << ans << endl;

    }

    return 0;
}