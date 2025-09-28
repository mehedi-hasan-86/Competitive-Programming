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

    lli n;
    cin >> n;
    
    for(lli k = 1; k<=n; k++){
        lli total = k*k*(k*k-1)/2;
        lli attack = 4*(k-1)*(k-2);
        cout << total - attack << endl;
    }

    return 0;
}