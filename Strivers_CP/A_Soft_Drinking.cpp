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

    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_soft_drinks = (k*l)/nl;
    int total_limes = c*d;
    int salt = p/np;

    int res = min({total_soft_drinks, total_limes, salt})/n;
    cout << res << endl;


    return 0;
}