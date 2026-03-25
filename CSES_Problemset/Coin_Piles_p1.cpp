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
        lli a,b;
        cin >> a >> b;

        if((a+b)%3==0 && (a<=2*b) && (b<=2*a)){
            cout <<"YES" << endl;
        }else{
            cout <<"NO" << endl;
        }
    }

    return 0;
}