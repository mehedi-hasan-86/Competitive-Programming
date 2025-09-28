//Need to see next time 
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
        lli r ,c;
        cin >> r >> c;

        lli x = max(r,c);
        lli z = (x-1)*(x-1);

        lli ans = 0;
        if(r>c){
            if(r%2==0){
              ans += 2*r - c;
            }else{
              ans +=c;
            }
            cout << ans + z << endl;
        }else{
            if(c%2==0){
                ans +=r;
            }else{
                ans +=2*c - r;
            }
            cout << ans + z << endl;

        }



        
    }

    return 0;
}