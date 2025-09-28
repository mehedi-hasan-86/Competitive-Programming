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
    cin >> n;

    vl x(n);
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    vl a(x.begin(), x.end());
    for(int i=0; i<n; i++){
       if(a[i]>a[i+1]){
        a[i+1] = a[i];
       }
    }

    lli ans = accumulate(a.begin(), a.end(),0LL) - accumulate(x.begin(), x.end(),0LL);
    cout << ans << endl;

    return 0;
}