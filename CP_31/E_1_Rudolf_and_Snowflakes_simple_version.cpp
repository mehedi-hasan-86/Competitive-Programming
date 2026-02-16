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
        lli n;
        cin >> n;

        bool isC = false;

        for(lli k=2; k*k<=n; k++ ){
            lli sum = 1 + k + k*k;
            lli term = k*k;

            while(sum <=n){
                if(sum==n){
                    isC = true;
                    break;
                }
                term *=k;
                sum +=term;
            }
        if(isC) break;
        }
        cout << (isC ? "YES": "NO") << endl;

    }

    return 0;
}