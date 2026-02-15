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
        lli sum = (a[0] + a[n-1])/(n-1);

        vl pf(n-1);
        for(int i=0; i<n-1; i++){
            lli val = (a[i+1]-a[i]);
            pf[i] = (val+sum)/2;
        }

        vl res;
        res.push_back(pf[0]);
        for(int i=1; i<n-1; i++){
            res.push_back(pf[i]-pf[i-1]);
        }

        lli sumF = accumulate(res.begin(), res.end(), 0LL);
        res.push_back(sum - sumF);


        for(int x : res){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}