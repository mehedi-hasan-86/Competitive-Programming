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

    vector<lli> f(n+1);
    f[1]=0;
    if(n>=2) f[2] = 1;
    for(int i=3; i<=n; i++){
        f[i] = (i-1)*(f[i-1]+ f[i-2]);
    }
    cout << f[n];

    return 0;
}