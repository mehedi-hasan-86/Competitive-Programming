#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

double myPow(double x, int n){

    lli N = n;
    if(N<0){
        x = 1/x;
        N = -N;
    }
    if(N==0) return 1;

    if(N%2==0){
        return myPow(x*x, N/2);
    }
    return x*myPow(x,N-1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    double x;
    int n;
    cin >> x >> n;

    cout << myPow(x,n) << endl;

    return 0;
}