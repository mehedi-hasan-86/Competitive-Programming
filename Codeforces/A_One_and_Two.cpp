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
        int cnt2 = count(a.begin(), a.end(),2);

        if(cnt2%2){
            cout << -1 << endl;
            continue;
        }
        if(cnt2==0){
            cout << 1 << endl;
            continue;
        }

        int cntL = 0;
        int l = 0;
        for(int i=0; i<n; i++){
            l++;
            if(a[i]==2) cntL++;
            if(cntL==cnt2/2){
                break;
            }
        }
        cout << l << endl;
   
    }

    return 0;
}