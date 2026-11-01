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
        bool isC = false;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(a[i],a[j])<=2){
                    isC = true;
                    break;
                }
            }
        }
        cout << (isC ? "Yes":"No")<< endl; 
        
    }

    

    return 0;
}