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

    int n,k;
    cin >> n >> k;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int sum = 0;
    for(int i=0; i<k; i++) sum +=a[i];

    vi res;
    res.push_back(sum);
    for(int i=k; i<n; i++){
        sum +=a[i];
        sum -=a[i-k];
        res.push_back(sum);
    }
    double ans = accumulate(res.begin(), res.end(), 0.0);
    cout <<fixed << setprecision(10) <<  ans/(n-k+1) << endl;

    return 0;
}