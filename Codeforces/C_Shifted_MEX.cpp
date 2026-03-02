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

        set<lli> s(a.begin(), a.end());
        vl b(s.begin(), s.end());
        int cnt = 1;
        int mxCnt = 1;

        for(int i=0; i<b.size()-1; i++){
            if(b[i+1]-b[i]==1){
                cnt++;
            }else{
                mxCnt = max(cnt, mxCnt);
                cnt=1;
            }
        }
        mxCnt = max(mxCnt, cnt);

        cout << mxCnt << endl;

        // if(mxCnt==1){
        //     cout << 1 << endl;
        // }else{
        //     cout << mxCnt+1 << endl;
        // }
    }

    return 0;
}