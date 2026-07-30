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

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        lli curSum = a[0];
        lli mxSum = a[0];

        for(int i=1; i<n; i++){
            if(abs(a[i])%2 == abs(a[i-1])%2){
                curSum = a[i];
            }else{
            curSum = max(a[i],curSum+a[i]);
            }
            mxSum = max(mxSum, curSum);
        }
        cout << mxSum <<endl;
    }

    return 0;
}