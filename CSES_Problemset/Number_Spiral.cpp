#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

lli f(lli x, lli y){
    lli m = max(x,y);
    lli r = (m-1)*(m-1);
    if(m%2==0){
        r += x+m-y;
    }else{
        r +=y+m-x;
    }
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        lli x,y;
        cin >> x >> y;
        cout << f(x,y) << endl;
    }

    return 0;
}