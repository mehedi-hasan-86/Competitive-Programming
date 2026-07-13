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
        lli n,a;
        cin >> n >> a;

        vl b(n);
        for(lli i=0; i<n; i++){
            cin >> b[i];
        }

        lli lb = lower_bound(b.begin(), b.end(),a)-b.begin();
        lli ub =upper_bound(b.begin(), b.end(),a) - b.begin();

        if(n-ub > lb){
            cout << a+1 << endl;
        }else{
            cout << a-1 << endl;
        }

        // if(lb==ub){
        //     if(n/2.0 > lb){
        //         cout << a+1 << endl;
        //     }else{
        //         cout << a-1 << endl;
        //     }
        // }else{
        //     lb = lb+1;
        //     if(n/2.0 > lb){
        //         cout << a+1 << endl;
        //     }else{
        //         cout << a-1 << endl;
        //     }

        // }

    }

    return 0;
}