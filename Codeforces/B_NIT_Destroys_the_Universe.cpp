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
        int cnt = 0;
        bool isC = false;
        for(int i=0; i<n; i++){
                if(a[i] != 0 && !isC){
                    cnt++;
                    isC = true;
                }else if(a[i]==0){
                    isC = false;
                }
        }
        cout << cnt << endl;
    }

    

    return 0;
}