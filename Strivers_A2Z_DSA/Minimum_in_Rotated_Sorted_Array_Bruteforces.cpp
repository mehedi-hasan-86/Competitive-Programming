#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int findMin(vi &a){
    int minVal = INT_MAX;
    for(int i=0; i<a.size(); i++){
        minVal = min(minVal, a[i]);
    }
    return minVal;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int res = findMin(a);
    cout << res << endl;


    return 0;
}