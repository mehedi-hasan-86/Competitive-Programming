#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli lcm(lli a, lli b){
    return a/__gcd(a,b)*b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){

        lli n,x,y;
        cin >> n >> x >> y;

        if(x==y){
            cout << 0 << endl;
            continue;
        }

        lli red = n/x;
        lli blue = n/y;
        lli purple = n/ lcm(x,y);

        lli R = red - purple;
        lli B = blue - purple;

        lli sumMax = R*(2*n-R+1)/2;
        lli sumMin = B*(B+1)/2;

        cout << sumMax-sumMin << endl;
   

    }



    return 0;
}