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

    lli w,h,n;
    cin >> w >> h >> n;

    lli l = 0,  hi = 1e18;

    lli x = hi;
    while(l<=hi){
        lli m = l + (hi-l)/2;

        lli a = m/w;
        lli b = m/h;


        if(b != 0 && a >= (n+b-1)/b){
            x = m;
            hi = m-1;
        }else{
            l = m+1;
        }
    }
    cout << x << endl;

    return 0;
}