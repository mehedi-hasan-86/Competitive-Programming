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
        lli a, b;
        cin >> a >> b;
        /*
        2x + y = a
        x + 2y = b;

        x = (2a-b)/3 ----(i)
        y = (2b-a)/3 ----(ii)

        (i)=>
        2a - b == mod 3
        so (a+b) mod 3 

        and 2a -b or 2b -a 
        2*min(a,b) >= max(a,b)


        */
        lli  res = (a+b)%3;
        if(res == 0 && (max(a,b)) <= 2*min(a,b)){
            cout <<"YES" <<  endl;
        }else{
            cout <<"NO" << endl;
        }
    }

    return 0;
}