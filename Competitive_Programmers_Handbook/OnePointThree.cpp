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

    /*
    (a+b)%m = (a%m + b%m)%m
    (a-b)%m = (a%m - b%m)%m
    (a*b)%m = (a%m * b%m) %m
    */

    //Factorial Calculation Code:
    // int m = 7;
    // long long x = 1;
    // int n;
    // cin >>n;
    // for(int i=2; i<=n; i++){
    //     x = (x*i)%m;
    // }
    // x = -15;
    // x = (x%m);
    // if(x<0) x +=m;
    // cout << x%m << endl;

    double o = 0.3*3 + 0.1;
    cout << fixed << setprecision(20) << o << endl;

    return 0;
}