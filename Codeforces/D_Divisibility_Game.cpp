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
        int n,m;
        cin >> n  >> m;

        vi a(n), b(m);
       
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int mxVal = *max_element(a.begin(), a.end());

        for(int i=0; i<m; i++){
            cin >> b[i];
        }
        int mxVal1 = *max_element(b.begin(), b.end());

        int mx = max(mxVal, mxVal1);

        vector<bool> isC(mx+1, false);
        for(int x : a){
            for(int i=x; i<=mx; i+=x){
                isC[i] = true;
            }
        }

        int cntD = 0, cntNd =0;
        for(int x : b){
            if(isC[x]){
                cntD++;
            }else{
                cntNd++;
            }
        }

        if(cntD>cntNd){
            cout << "Alice" << endl;
        }else{
            cout << "Bob" << endl;
        }
    }

    return 0;
}