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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vi b;
        b.push_back(a[0]);
        for(int i=1; i<n; i++){
            if(a[i] != a[i-1]){
                b.push_back(a[i]);
            }
        }


        // for(auto x : b){
        //     cout << x << " ";
        // }
        // cout << endl;

        if(b.size()<=2){
            cout << b.size() << endl;
            continue;
        }
        int ans = b.size();
        for(int i=0; i<b.size()-2; i++){
            ans -=(b[i]<b[i+1] && b[i+1]<b[i+2]);
            ans -=(b[i]>b[i+1] && b[i+1]>b[i+2]);
        }
        cout << ans << endl;

      

    }

    return 0;
}