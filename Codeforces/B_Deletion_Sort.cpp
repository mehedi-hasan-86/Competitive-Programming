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

        vi a(n);
        for(int i=0;i<n; i++) cin >> a[i];

        bool isC = false;
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                isC = true;
            }
        }
        if(isC) cout << 1 << endl;
        else cout << n << endl;
    }

    return 0;
}