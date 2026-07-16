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
        int n,k;
        cin >> n >> k;

        string A,B;
        cin >> A >> B;

        lli c00 = 0, c01 = 0, c10 = 0, c11 = 0;
        for(int i=0; i<n; i++){
            if(A[i]=='0' && B[i]=='0') c00++;
            else if(A[i]=='0' && B[i]=='1') c01++;
            else if(A[i]=='1' && B[i]=='0') c10++;
            else c11++;
        }

        auto calc = [&](lli zero){
            return zero*(n-zero);
        };

        lli zeroA = c00 + c01;
        lli zeroB = c00 + c10;
        lli zeroC = c00 + c11;

        lli each = ((1LL<<k)+1)/3;

        if(k&1){
            cout << each*(calc(zeroA) + calc(zeroC) + calc(zeroB)) << endl;
        }else{
            cout << each*(calc(zeroA) + calc(zeroB) + calc(zeroC)) + calc(zeroA) + calc(zeroB) << endl;
        }

    }



    return 0;
}