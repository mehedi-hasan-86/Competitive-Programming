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

    int n,q;
    cin >> n >> q;

    vl a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    lli sum = accumulate(a.begin(), a.end(), 0LL);

    vi LF(n,-1);
    vl LQ(n,0);

    for(int i=0; i<n; i++){
        LQ[i] = a[i];
    }

    int ls = -1;
    lli lsqv = 0;

    for(int qx = 0; qx<q; qx++){
        int t;
        cin >> t;

        if(t==1){
            int i;
            lli x;
            cin >> i >> x;
            i--;

            lli currVal;
            if(ls > LF[i]){
                currVal = lsqv;
            }else{
                currVal = LQ[i];
            }
            sum -= currVal;
            sum +=x;

            LF[i] = qx;
            LQ[i] = x;

        }else{
            lli x;
            cin >> x;

            ls =  qx;
            lsqv = x;

            sum = x*(lli)n;
        }
        cout << sum << endl;
    }

    return 0;
}