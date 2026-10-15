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
        int totalXor = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            totalXor ^=a[i];
        }
        bool isC = false;
        if(totalXor==0){
            isC = true;
        }

        vl pref(n+1, 0);
        for(int i=0; i<n; i++){
            pref[i+1] = pref[i]^a[i];
        }

        for(int i=1; i<n; i++){
            int xor1 = pref[i];
            // for(int p = 0; p<i; p++){
            //     xor1 ^= a[p];
            // } 
            
            for(int j= i+1; j<n; j++){
                int xor2 = pref[j]^pref[i];
                int xor3 = pref[n]^pref[j];
                // for(int p = i; p<j; p++){
                //     xor2 ^= a[p];
                // }
                // for(int p = j; p<n; p++){
                //     xor3 ^= a[p];
                // }
                if(xor1 == xor2 && xor2==xor3){
                    isC = true;
                    break;
                }
            }

        }
        cout <<(isC ? "YES":"NO") << endl;
    }
    return 0;
}