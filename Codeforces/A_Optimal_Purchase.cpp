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
        lli n, a,b;
        cin >> n >> a >> b;

        if(n<3){
            cout << min(n*a, b) << endl;
            continue;
        }
       lli x =  min((n/3)*b + (n%3)*a, n*a);
       lli y =  min((n/3 + 1)*b, x);

       cout << min(x,y )<< endl;
        
    }

    return 0;
}