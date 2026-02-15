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
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int mxVal = INT_MIN;
    vi ans;
    for(int i=n-1; i>=0; i--){
        if(a[i]>mxVal){
            ans.push_back(a[i]);
        }
        mxVal = max(a[i], mxVal);
    }
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}