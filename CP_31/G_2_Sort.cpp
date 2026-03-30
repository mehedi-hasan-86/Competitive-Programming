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
        int n,k;
        cin >> n >> k;

        vl a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vi ok(n-1,0);
        for(int i=0; i<n-1; i++){
            if(a[i]< 2*a[i+1]) ok[i] = 1;
        }

        int cnt = 0, sum = 0;
        for(int i=0; i<n-1; i++){
            sum +=ok[i];
            if(i>=k) sum -=ok[i-k];
            if(sum==k) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}