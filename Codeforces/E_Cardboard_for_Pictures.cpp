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
        lli c;
        cin >> n >> c;

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        lli l = 0, r= 1e9;
        while(l<=r){
            lli m = l + (r-l)/2;
            lli val = 0;
            for(int i=0; i<n; i++){
                val +=(a[i] + 2*m)*(a[i]+2*m);
                if(val>c) break;
            }
            if(val==c){
                cout << m << endl;
                break;
            }
            if(val>c){
                r = m-1;
            }else{
                l = m+1;
            }

        }
    }

    return 0;
}