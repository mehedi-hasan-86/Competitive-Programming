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
        lli p,q;
        cin >> p >>q;

        if( p<q && min(p/2, q/3)>= q-p){
            cout <<"Bob" << endl;
        }else{
            cout <<"Alice" << endl;
        }
    }


    return 0;
}