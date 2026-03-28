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

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vl a(n);
        for(auto &x : a) cin >> x;

        for(auto &x : a){
            if(x%10==5){
                x +=5;
            }
        }
        bool has_zero = false;
        for(auto x : a){
            if(x%10==0) has_zero = true;
        }

        if(has_zero){
            bool isC = true;
            for(int i=0; i<n; i++){
                if(a[i] != a[0]) isC = false;
            }
            cout << (isC ? "Yes":"No") << endl;
        }else{
            for(auto &x:a){
                while(x%10 != 2){
                    x +=x%10;
                }
            }
            bool isC = true;
            for(int i=0; i<n; i++){
                if(a[i]%20 != a[0]%20){
                    isC = false;
                }
            }
            cout << (isC ? "Yes":"No") << endl;
        }
    }



    return 0;
}