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

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }


        lli val = 0;
        bool isC = true;
        for(int i=0; i<n-1; i++){
            val +=(a[i]-(i+1));
            if(val<0){
                isC = false;
                break;;
            }
        }
        // cout << val << endl;
        if( isC && val+a[n-1]>=n){
            cout <<"YES" << endl;
        }else{
            cout <<"NO" << endl;
        }

    }

    return 0;
}