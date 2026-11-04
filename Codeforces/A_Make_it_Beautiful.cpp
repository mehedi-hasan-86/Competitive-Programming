#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;

    while(t--){
        int n;
        cin >> n;

        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        if(a[0]==a[n-1]){
            cout << "NO" << endl;
            //continue;
        }else {
        cout <<"YES" << endl;
        cout << a[0] << " " << a[n-1] << " ";
        for(int i=1; i<n-1; i++){
            cout << a[i] <<" ";
        }
        cout << endl;

        }

    }

    return 0;
}