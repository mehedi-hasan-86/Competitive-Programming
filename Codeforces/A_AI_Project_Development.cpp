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
        int n,x,y,z;
        cin >> n >> x >> y >> z;

        int rh1, rh2;
        if(n%(x+y) == 0){
            rh1 = n/(x+y);
        }else{
            rh1 = n/(x+y)+1;
        }

        int remPL = n-x*z;
        rh2 = z;
        if(remPL%(x+10*y)==0){
            rh2 += remPL/(x+10*y);
        }else{
             rh2 += remPL/(x+10*y)+1;
        }

        cout << min(rh1, rh2) << endl;
    }

    return 0;
}