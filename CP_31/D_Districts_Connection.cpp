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

        vl a(n+1);
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        int diff = -1;
        for(int i=2; i<=n; i++){
            if(a[i] != a[1]){
                diff = i;
                break;
            }
        }

        if(diff == -1){
            cout <<"NO" << endl;
            continue;
        }

        cout <<"YES" << endl;
        for(int i=2; i<=n; i++){
            if(a[i] != a[1]){
                cout << 1 << " " << i << endl;
            } 
        }
        for(int i=2; i<=n; i++){
            if(a[i]==a[1]){
                cout << diff << " " << i << endl;
            }
        }

    }

    return 0;
}