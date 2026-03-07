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

    vl a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int len = 1;
    int mxLen = 1;
    for(int i=0; i<n-1; i++){
        if(a[i]<a[i+1]){
            len++;
        }else{
            mxLen = max(mxLen, len);
            len  = 1;
        }
    }
    mxLen = max(mxLen, len);
    cout << mxLen << endl;

    return 0;
}