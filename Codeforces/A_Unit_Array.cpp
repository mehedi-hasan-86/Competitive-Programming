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
        int m = 0, p = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==1){
                p +=1;
            }else{
                m -=1;
            }
        }
       
        int cnt = 0;
        while(true){
            if(abs(m)<=p && (abs(m))%2==0){
                break;
            }
            cnt++;
            m +=1;
            p +=1;
        }
        cout << cnt <<endl;
    }

    return 0;
}