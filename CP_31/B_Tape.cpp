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

    int n,m,k;
    cin >> n >> m >> k;

    vi b(n);
    for(int i=0; i<n; i++) cin >> b[i];

    vi gp;
    for(int i=0; i<n-1; i++){
        gp.push_back(b[i+1]-b[i]-1);
    }
    sort(gp.begin(), gp.end());
    int mrg = n-k;
    lli ext = 0;

    for(int i=0; i<mrg; i++){
        ext += gp[i];
    }
    cout << n+ext << endl;

    return 0;
}