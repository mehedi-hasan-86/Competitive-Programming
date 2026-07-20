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
        int  n,x,y;
        cin >> n >> x >> y;

        int g = __gcd(x,y);
        bool isC = true;
        for(int i=1; i<=n; i++){
            int p;
            cin >> p;

            if((i%g) != (p%g)){
                isC = false;
            }
        }
        if(isC) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }

    return 0;
}