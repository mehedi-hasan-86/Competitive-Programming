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
        lli x,y;
        cin >> n >> x >> y;

        vl a(n);
        int sumP = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sumP ^= (a[i]%2);
        }
        int yP = y%2;
        int aP = x%2;
        int bP = (x+3)%2;

        aP ^=sumP;
        bP ^=sumP;

        if(yP == aP) cout <<"Alice" << endl;
        else cout <<"Bob" << endl;
    }

    return 0;
}