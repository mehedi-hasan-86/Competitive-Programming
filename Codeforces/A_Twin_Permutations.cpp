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
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vi a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int mx = *max_element(a.begin(), a.end());
        mx = mx+1;
        for(int i=0; i<n; i++){
            cout << mx-a[i] << " ";
        }
        cout << endl;

        



    }

    return 0;
}