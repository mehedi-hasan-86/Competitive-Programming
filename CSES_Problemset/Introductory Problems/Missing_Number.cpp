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

    vi a(n);
    for(int i=0; i<n-1; i++){
        cin >> a[i];
    }
    lli sum = accumulate(a.begin(), a.end(),0LL);
    lli original_sum = n*1LL*(n+1)/2;
    cout << original_sum - sum << endl;



   

    return 0;
}