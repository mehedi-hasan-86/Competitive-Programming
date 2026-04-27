#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int cc(int x){
    while(x%2==0){
        x /=2;
    }
    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vi a(n+1);
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }

        bool isC = true;
        for(int i=1; i<=n; i++){
            int idx = i;
            int val  = a[i];

            idx = cc(idx);
            val = cc(val);

            
            if(idx != val){
                isC = false;
                break;
            }
        }
        if(isC) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    
    }

    return 0;
}