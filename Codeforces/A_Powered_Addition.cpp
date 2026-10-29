#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        lli mx = a[0];
        lli mxDif = 0;
        for(int i=1; i<n; i++){
            if(a[i]<mx){
                mxDif = max(mxDif,mx-a[i]);
            }else{
              mx = a[i];  
            }
        }

        int ans  = 0;
        lli p = 1;
        while(p-1<mxDif){
            p *=2;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}