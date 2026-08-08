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

    vi x(n);
    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    int mxSum = x[0];
    int curSum = x[0];
    for(int a=1; a<n; a++){
        curSum = max(curSum+x[a], x[a]);
        mxSum  = max(curSum, mxSum);
    }
    cout << mxSum << endl;

    return 0;
}