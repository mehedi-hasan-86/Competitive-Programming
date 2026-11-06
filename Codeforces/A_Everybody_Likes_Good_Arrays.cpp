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

        vl a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int cnt = 0;
        for(int i=0; i<n-1;i++){
            if(a[i]%2==a[i+1]%2){
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    

    return 0;
}