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
        vector<double> c(n), p(n);
        for(int i=0; i<n;i++){
            int x ,y;
            cin >> x >> y;
            c[i] = x; p[i]=y;
        }
        double ans = 0.0;
        for(int i=n-1; i>=0; i--){
            double res = c[i];
            res +=(1.0-p[i]/100.0)*ans;
            double sp = ans;
            ans = max(res, sp);
        }
        cout << fixed<< setprecision(10) << ans << endl;
    }

    return 0;
}