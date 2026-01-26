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
        int n,s;
        cin >> n >> s;

        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int sum = accumulate(a.begin(), a.end(), 0);
        if(sum<s){
            cout << -1 << endl;
            continue;
        }
        int mxLn = 0;
        int l = 0, curSum = 0;
        for(int r = 0; r<n; r++){
            curSum +=a[r];

            while(curSum > s){
                curSum -=a[l];
                l++;
            }
            if(curSum==s){
                mxLn = max(mxLn, r-l+1);
            }
        }
        cout << n - mxLn << endl;

        
    }

    return 0;
}