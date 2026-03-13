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

    int n;
    lli h;
    cin >> n >> h;
    vl a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int ans = 0;
    for(int k=1; k<=n; k++){
        vl b;
        for(int i=0; i<k; i++) b.push_back(a[i]);
        sort(b.rbegin(), b.rend());
        lli height = 0;
        for(int i=0; i<k; i+=2) height +=b[i];
        if(height<=h) ans = k;
        else break;   
    }
    cout << ans << endl;
    return 0;
}